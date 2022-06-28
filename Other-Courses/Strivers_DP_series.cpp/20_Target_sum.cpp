#include<bits/stdc++.h>
int mod =(int)1e9+7;

int countPartitionsUtil(int ind, int target,
              vector<int>& arr, vector<vector<int>> &dp){

     if(ind == 0){
        if(target==0 && arr[0]==0)
            return 2;
        if(target==0 || target == arr[0])
            return 1;
        return 0;
    }
    
    if(dp[ind][target]!=-1)
        return dp[ind][target];
        
    int notTaken = countPartitionsUtil(ind-1,target,arr,dp);
    
    int taken = 0;
    if(arr[ind]<=target)
        taken = countPartitionsUtil(ind-1,target-arr[ind],arr,dp);
        
    return dp[ind][target]= (notTaken + taken)%mod;
}
int targetSum(int n, int d, vector<int>& arr) {
    int sum = 0;
    sum = accumulate(arr.begin() , arr.end() , sum);
    if((d+sum)%2==1) return 0;
    int s1 = (d+sum)/2;
    vector<vector<int>> dp(n,vector<int>(s1+1,-1));
    return countPartitionsUtil(n-1,s1,arr,dp);
}
