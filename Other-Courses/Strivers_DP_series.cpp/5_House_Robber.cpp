// recursion + memoization
long long solve(int idx , vector<int> arr , 
          vector<long long> &dp, bool takenEnd){
    if(idx==0 and takenEnd) return 0;
    if(idx==0 and !takenEnd) return arr[0];
    if(idx<0) return 0;
    if(dp[idx]!=-1) return dp[idx];
    return dp[idx] = max(arr[idx] + 
               solve(idx-2 , arr,dp , takenEnd),
               solve(idx-1 , arr,dp,takenEnd));
}
long long int houseRobber(vector<int>& arr)
{
    bool takenEnd = true;
    int n = arr.size();
    if(n==1) return (long long)arr[0];
    if(n==2) return (long long)0;
    vector<long long> dp1(n+1 , -1);
    vector<long long> dp2(n+1 , -1);
    long long x = arr[n-1] + 
        solve(n-3 , arr , dp1,takenEnd);
    long long y = solve(n-2 , arr ,dp2 ,!takenEnd);
    return max(x,y);
}


// tabulation

long long int houseRobber(vector<int>& arr)
{
    int n = arr.size();
    if(n==1) return (long long)arr[0];
    if(n==2) return (long long)0;
    vector<long long> dp1(n-1 , -1);
    vector<long long> dp2(n-1 , -1);
    
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0 ; i<n ; i++){
        if(i!=0)arr1.push_back(arr[i]);
        if(i!=n-1)arr2.push_back(arr[i]);
    }
    dp1[0] = arr1[0];
    for(int i=1 ; i<n-1; i++){
        long long x = arr1[i] , y=0;
        if(i>1)x += dp1[i-2];
        y= dp1[i-1];
        dp1[i] = max(x,y);
    }
    dp2[0] = arr2[0];
    for(int i=1 ; i<n-1; i++){
        long long x = arr2[i] , y=0;
        if(i>1)x = arr2[i] + dp2[i-2];
        y = dp2[i-1];
        dp2[i] = max(x,y);
    }
    return max(dp1[n-2] , dp2[n-2]);

}

// space optimization

long long int solve(vector<int>& arr){
    int n = arr.size();
    long long int prev = arr[0];
    long long int prev2 =0;
    
    for(int i=1; i<n; i++){
        long long int pick = arr[i];
        if(i>1)
            pick += prev2;
        int long long nonPick = 0 + prev;
        
        long long int cur_i = max(pick, nonPick);
        prev2 = prev;
        prev= cur_i;
        
    }
    return prev;
}

long long int houseRobber(int n, vector<int> &arr){
    vector<int> arr1;
    vector<int> arr2;
    
    for(int i=0; i<n; i++){
        
        if(i!=0) arr1.push_back(arr[i]);
        if(i!=n-1) arr2.push_back(arr[i]);
    }
    
    long long int ans1 = solve(arr1);
    long long int ans2 = solve(arr2);
    
    return max(ans1,ans2);
}
