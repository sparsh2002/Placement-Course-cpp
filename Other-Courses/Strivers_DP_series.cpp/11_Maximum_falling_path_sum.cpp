#include<bits/stdc++.h>

// recursion + memoization
int solve(int i , int j , vector<vector<int>>&grid , vector<vector<int>> &dp){
    if(i == grid.size() || j ==grid[0].size()|| i < 0 || j < 0) return INT_MIN;
    if(i==grid.size()-1){
        return grid[i][j];
    }
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] = grid[i][j] + 
       max(solve(i+1,j+1 ,grid,dp),
       max(solve(i+1 , j,grid,dp),
           solve(i+1 , j-1, grid,dp)));
}

int getMaxPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int maxx = INT_MIN;
    vector<vector<int>> dp(n , vector<int>(m,-1));
    for(int j=0 ; j<m ; j++){
        int x = solve(0 , j , grid,dp);
        maxx = max(maxx , x);
    }
    return maxx;
}

// tabulation
int getMaxPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n , vector<int>(m,-1));
    for(int j=0 ; j<m ; j++){
        dp[0][j] = grid[0][j];
    }
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            int up = INT_MIN , upLeft = INT_MIN , 
            upRight = INT_MIN;
            dp[i][j] = grid[i][j];
            up = dp[i-1][j];
            if(j!=0) upLeft = dp[i-1][j-1];
            if(j!=m-1) upRight = dp[i-1][j+1];
            dp[i][j] += max(up , max(upLeft , upRight));
        }
    }
    int maxx = INT_MIN;
    for(int j=0 ; j<m ; j++){
        maxx = max(maxx , dp[n-1][j]);
    }
    return maxx;
}

// space optimisation
int getMaxPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<int> prev(m , 0);
    for(int j=0 ; j<m ; j++){
        prev[j] = grid[0][j];
    }
    
    for(int i=1 ; i<n ; i++){
        vector<int> temp(m , 0);
        for(int j=0 ; j<m ; j++){
            temp[j] = grid[i][j];
            int up = INT_MIN , upLeft = INT_MIN , 
            upRight = INT_MIN;
            up = prev[j];
            if(j!=0) upLeft = prev[j-1];
            if(j!=m-1) upRight = prev[j+1];
            temp[j] += max(up , max(upLeft , upRight));
        }
        prev = temp;
    }
    
    int maxx = INT_MIN;
    for(int j=0 ; j<m ; j++){
        maxx = max(maxx , prev[j]);
    }
    return maxx;
}