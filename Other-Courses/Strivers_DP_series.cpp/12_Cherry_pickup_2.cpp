#include<bits/stdc++.h>

// recursion + memoization
int solve(int i , int j1 , int j2 ,vector<vector<int>> &grid , vector<vector<vector<int>>> &dp){
    if(j1<0 or j2<0 or 
       j1>=grid[i].size() or j2>=grid[i].size()){
        return INT_MIN;
    }
    
    if(i==grid.size()-1){
        if(j1==j2){
            return grid[i][j1];
        }
        else{
            return grid[i][j1] + grid[i][j2];
        }
    }
    if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
    int ans = 0;
    
    if(j1==j2){
        ans += grid[i][j1];
    }
    else{
        ans += grid[i][j1] + grid[i][j2];
    }
    
    int maxx = INT_MIN;
    
    for(int k=-1 ; k<=1 ; k++){
        for(int l=-1 ; l<=1 ; l++){
            maxx = max(maxx , 
                       solve(i+1 , j1+k , j2+l , grid,dp));
        }
    }
    return dp[i][j1][j2] = ans + maxx;
}
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> dp(r , vector<vector<int>>(c, vector<int>(c, -1)));
    return solve(0 , 0 , c-1 , grid , dp);
}