#include<bits/stdc++.h>

// recursion + memoisation
int solve(int i , int j , vector<vector<int>>&tri ,vector<vector<int>>&dp){
    if(i==tri.size()-1){
        return tri[i][j];
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(j>=tri[i].size()) return INT_MAX;
    
    return dp[i][j] = tri[i][j] +
        min(solve(i+1 ,j, tri,dp),solve(i+1,j+1 ,tri,dp));
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(n , vector<int>(n , -1));
	return solve(0,0,triangle,dp);
}

// tabulation
int minimumPathSum(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(n , vector<int>(n , -1));
    dp[0][0] = triangle[0][0];
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<triangle[i].size() ; j++){
            if(j==0){
                dp[i][j] = triangle[i][j] +dp[i-1][j];
            }
            else if(j==triangle[i].size()-1){
                dp[i][j] = triangle[i][j] +dp[i-1][j-1];
            }
            else{
                dp[i][j] = triangle[i][j] + 
                           min(dp[i-1][j] , dp[i-1][j-1]);
            }
        }
    }
    int minn = INT_MAX;
    for(int j=0 ; j<dp[n-1].size() ; j++){
        minn = min(minn , dp[n-1][j]);
    }
    return minn;
}

// space optimization

int minimumPathSum(vector<vector<int>>& triangle, int n){
    vector<int> prev(1,0);
    prev[0] = triangle[0][0];
    for(int i=1 ; i<n ; i++){
        vector<int> temp(triangle[i].size());
        for(int j=0 ; j<triangle[i].size() ; j++){
            if(j==0){
                temp[j] = triangle[i][j] + prev[j];
            }
            else if(j==triangle[i].size()-1){
                temp[j] = triangle[i][j] + prev[j-1];
            }
            else{
                temp[j] = triangle[i][j] + 
                         min(prev[j-1] , prev[j]);
            }
        }
        prev = temp;
    }
    
    int minn = INT_MAX;
    for(int j=0 ; j<prev.size() ; j++){
        minn = min(minn , prev[j]);
    }
    return minn;
}