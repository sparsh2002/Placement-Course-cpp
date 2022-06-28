#include<bits/stdc++.h>
int solve(int i , int sum , vector<int>&arr , vector<vector<int>> &dp){
    if(sum<0){
        return INT_MAX;
    }
    if(sum==0){
        return 0;
    }
    if(i==0){
       if(arr[i]==sum){
           return 1;
       }
        if(arr[i]<sum){
            int x = solve(i, sum-arr[i] , arr,dp);
            if(x==INT_MAX){
                return INT_MAX;
            }
            return 1 + x;
        }
       return INT_MAX;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    int notTaken = 0;
    int x = solve(i-1 , sum , arr,dp);
    if(x==INT_MAX) notTaken = INT_MAX;
    else notTaken = x;
    int taken = INT_MAX;
    if(arr[i]<=sum) {
        taken = 1 ;
        x = solve(i,sum-arr[i] , arr,dp);
        if(x==INT_MAX) taken = INT_MAX;
        else taken += x;
    }
        
    return dp[i][sum] = min(notTaken , taken);
}

int minimumElements(vector<int> &arr, int sum)
{
    int n = arr.size();
    vector<vector<int>> dp(n , vector<int>(sum+1 , -1));
    int ans =  solve(n-1, sum ,arr ,dp);
    if(ans==INT_MAX or ans==INT_MIN) return -1;
    return ans;
}