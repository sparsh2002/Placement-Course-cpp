#include<bits/stdc++.h>
int maxx = 1e8;
long solve(int i , int sum, int * arr , vector<vector<long>> &dp){
    if(sum==0) return 1;
    if(sum<0) return 0;
    if(i==0){
        if(arr[i]<=sum){
            return solve(i , sum-arr[i] , arr,dp);
        }
        else return 0;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    long notPick = solve(i-1 , sum , arr,dp);
    long pick = 0;
    if(arr[i]<=sum){
        pick = solve(i , sum-arr[i] , arr,dp);
    }
    return dp[i][sum] = pick+notPick;
    
}
long countWaysToMakeChange(int *arr, int n, int sum)
{
    vector<vector<long>> dp(n , vector<long> (sum+1 , -1));
    return solve(n-1 , sum , arr,dp);
}