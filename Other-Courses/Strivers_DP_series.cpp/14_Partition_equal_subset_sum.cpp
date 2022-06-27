#include<bits/stdc++.h>
int minSubsetSumDifference(vector<int>& arr, int n)
{
    int k = 0;
    k = accumulate(arr.begin() , arr.end() , k);
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
    
    int minn = k;
    int i=0 , j = k;
    while(i<=j){
        if(dp[n-1][i]==1 and dp[n-1][j]==1){
            minn = min(minn , j-i);
            i++;
            j--;
        }
        else if(dp[n-1][i]!=1){
            i++;
        }
        else if(dp[n-1][j]!=1){
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    
    return minn;
}
