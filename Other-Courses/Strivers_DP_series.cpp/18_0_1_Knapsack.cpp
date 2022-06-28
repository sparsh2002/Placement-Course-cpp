#include<bits/stdc++.h>
int solve(int i , vector<int> value , vector<int> weight , int wt ,vector<vector<int>>&dp){
    if(wt<0){
        return INT_MIN;
    }
    if(i==0){
        if(weight[i]<=wt){
            return value[i];
        }
        return 0;
    }
    if(dp[i][wt]!=-1) return dp[i][wt];
    return dp[i][wt]=max(solve(i-1 ,value , weight , wt,dp) ,value[i]+ solve(i-1 , value , weight , wt-weight[i],dp));
}
int knapsack(vector<int> weight,vector<int> value,int n, int maxWeight) 
{
    vector<vector<int>> dp(n,vector<int>(maxWeight+1 , -1));
	return solve(n-1 , value , weight , maxWeight,dp);
}