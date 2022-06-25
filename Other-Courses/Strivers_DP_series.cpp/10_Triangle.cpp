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