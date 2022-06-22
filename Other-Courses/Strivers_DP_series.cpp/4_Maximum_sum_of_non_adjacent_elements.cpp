// Recursion + memoization
int solve(int idx ,vector<int>&arr , vector<int>&dp){
    if(idx==0) return arr[idx];
    if(idx<0){
        return 0;
    }
    if(dp[idx]!=-1) return dp[idx];
    int x = solve(idx-1 ,arr,dp);
    int y = arr[idx] + solve(idx-2 , arr, dp);
    return dp[idx] =  max(x,y);
}
int maximumNonAdjacentSum(vector<int> &arr){
    int n = arr.size();
    vector<int> dp(n+1 , -1);
    return solve(n-1  ,arr , dp);
}


// tabulation
int maximumNonAdjacentSum(vector<int> &arr){
    int n = arr.size();
    vector<int> dp(n , -1);
    dp[0] = arr[0];
    for(int i=1 ; i<n ; i++){
        int pick = arr[i];
        if(i>1)pick += dp[i-2];
        int notpick = dp[i-1];
        dp[i] = max(pick , notpick);
    }
    return dp[n-1];
}

// space optimizatoin

int maximumNonAdjacentSum(vector<int> &arr){
    int n = arr.size();
    if(n==1){
        return arr[0];
    }
    int prev = arr[0];
    int prev2 =0;
    
    for(int i=1; i<n; i++){
        int pick = arr[i];
        if(i>1)
            pick += prev2;
        int nonPick = 0 + prev;
        
        int cur_i = max(pick, nonPick);
        prev2 = prev;
        prev= cur_i;
        
    }
    return prev;
}