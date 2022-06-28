#include<bits/stdc++.h>
int solve(int i,int wt,vector<int>&value , vector<int>&weight , vector<vector<int>>&dp){
    if(wt<=0){
        return 0;
    }
    if(i==0){
        if(weight[i]<=wt){
            return value[i] + 
                solve(i ,wt-weight[i] , value , weight,dp);
        }
        return 0;
    }
    if(dp[i][wt]!=-1) return dp[i][wt];
    int notPick = solve(i-1 , wt , value , weight,dp);
    int pick = INT_MIN;
    if(weight[i]<=wt){
        pick = value[i] + solve(i , wt-weight[i] , value , weight,dp);
    }
    return dp[i][wt] = max(notPick , pick);
}
int unboundedKnapsack(int n, int wt, vector<int> &value, vector<int> &weight)
{
    vector<vector<int>> dp(n , vector<int>(wt+1 , -1));
    return solve(n-1,wt , value , weight,dp);
}
