#include<bits/stdc++.h>
bool solve(int n , int k , vector<int>&arr , vector<vector<int>>&dp){
    if(k<0){
        return false;
    }
    if(k==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(dp[n-1][k]!=-1) return dp[n-1][k];
    if(arr[n-1]<=k){
        return dp[n-1][k]=solve(n-1 , k-arr[n-1] , arr,dp)
            || solve(n-1 , k , arr,dp);
    }
    else{
        return dp[n-1][k] = solve(n-1 , k,arr,dp);
    }
}
bool canPartition(vector<int> &arr, int n)
{
    int sum = 0;
    sum = accumulate(arr.begin() , arr.end() , sum);
    if(sum%2==1) return false;
    int k = sum/2;
    vector<vector<int>> dp(n , vector<int>(k+1 , -1));
	return solve(n , k, arr,dp);
}
