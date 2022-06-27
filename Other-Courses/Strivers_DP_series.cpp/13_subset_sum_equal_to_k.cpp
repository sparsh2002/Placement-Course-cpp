#include<bits/stdc++.h>
// recursion + memoization
bool solve(int n , int k , vector<int>&arr , vector<vector<int>>&dp){
    if(k<0){
        return false;
    }
    if(k==0){
        return true;
    }
    if(n-1==0 and k!=0){
        return false;
    }
    if(dp[n-1][k]!=-1) return dp[n-1][k];
    if(arr[n-1]<=k){
        return dp[n-1][k]=solve(n-1 , k-arr[n-1] , arr,dp)
            || solve(n-1 , k , arr,dp);
    }
    else{
        return dp[n-1][k] = solve(n-1 , k , arr,dp);
    }
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    int sum = 0;
    sum = accumulate(arr.begin() , arr.end() , sum);
    if(sum==k) return true;
    vector<vector<int>> dp(n , vector<int>(k+1 , -1));
    return solve(n , k , arr ,dp);
}