// recursive solution
int solve(int i , vector<int>&arr){
    if(i==0) return 0;
    int one = solve(i-1 , arr) + abs(arr[i]-arr[i-1]);
    int two = 10001;
    if(i>1)
        two = solve(i-2 , arr) + abs(arr[i]-arr[i-2]);
    return min(one,two);
}

int frogJump(int n, vector<int> &heights)
{
    return solve(n-1 , heights);
}


// recursion + memoization

int solve(int i , vector<int>&arr , vector<int>&dp){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int one = solve(i-1 , arr,dp) + abs(arr[i]-arr[i-1]);
    int two = 100001;
    if(i>1)
        two = solve(i-2 , arr ,dp) + abs(arr[i]-arr[i-2]);
    return dp[i] =  min(one,two);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1 , -1);
    return solve(n-1 , heights , dp);
}


// Tabulation
int frogJump(int n, vector<int> &arr)
{
    vector<int> dp(n , -1);
    dp[0] = 0;
    for(int i=1 ; i<n ; i++){
        int one = dp[i-1] + abs(arr[i]-arr[i-1]);
        int two = INT_MAX;
        if(i>1){
            two = dp[i-2] + abs(arr[i]-arr[i-2]);
        }
        dp[i] = min(one , two);
    }
    
    return dp[n-1];
}

// space optimization

int frogJump(int n, vector<int> &arr)
{
    int two = 0;
    if(n==1) return two;
    int one = two + abs(arr[1]-arr[0]);
    if(n==2) return one;
    int curr;
    for(int i=2 ; i<n ; i++){
        curr = min(one+abs(arr[i]-arr[i-1]) , 
                       two + abs(arr[i]-arr[i-2])); 
        two = one;
        one = curr;
    }
    return curr;
}