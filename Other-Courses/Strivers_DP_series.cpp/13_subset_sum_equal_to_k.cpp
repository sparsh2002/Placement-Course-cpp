#include<bits/stdc++.h>
// recursion + memoization
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
        return dp[n-1][k] = solve(n-1 , k , arr,dp);
    }
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n , vector<int>(k+1 , -1));
    return solve(n , k , arr ,dp);
}


// tabulation
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n,vector<bool>(k+1,false));
    
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }
    
    if(arr[0]<=k)
        dp[0][arr[0]] = true;
    
    for(int ind = 1; ind<n; ind++){
        for(int target= 1; target<=k; target++){
            
            bool notTaken = dp[ind-1][target];
    
            bool taken = false;
                if(arr[ind]<=target)
                    taken = dp[ind-1][target-arr[ind]];
        
            dp[ind][target]= notTaken||taken;
        }
    }
    return dp[n-1][k];
}