#include<bits/stdc++.h>
int MOD = 1000000007;
// recursion+ memoization
int solve(int i, int j , string a , string b,vector<vector<int>>&dp){
    if(j==0){
        return 1;
    }
    if(i==0) return 0;
    if(dp[i-1][j-1]!=-1) return dp[i-1][j-1];
    if(a[i-1]==b[j-1]){
        return dp[i-1][j-1] = (solve(i-1,j-1,a ,b,dp) + 
            solve(i-1 , j , a,b,dp))%MOD;
    }
    
    return  dp[i-1][j-1] = solve(i-1 , j , a, b,dp)%MOD;
    
}
int subsequenceCounting(string &a, string &b, int n, int m) {
    vector<vector<int>> dp(n, vector<int>(m , -1));
    return solve(n , m , a , b,dp)%MOD;
} 

// tabulation
int subsequenceCounting(string &a, string &b, int n, int m) {
    vector<vector<int>> dp(n+1, vector<int>(m+1 , 0));
    
    for(int i=0 ; i<n+1 ; i++){
        for(int j=0 ; j<m+1 ; j++){
            if(j==0){
                dp[i][j] = 1;
            }
        }
    }
    
    for(int i=1 ; i<n+1 ; i++){
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%MOD;
            }
            else{
                dp[i][j] = dp[i-1][j]%MOD;
            }
        }
    }
    
    return dp[n][m];
} 
// space optimization
int subsequenceCounting(string &a, string &b, int n, int m) {
    vector<int> prev(m+1 , 0);
    prev[0] = 1;
    
    for(int i=1 ; i<n+1 ; i++){
        vector<int> temp(m+1 , 0);
        temp[0] = 1;
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]==b[j-1]){
                temp[j] = (prev[j-1] + prev[j])%MOD;
            }
            else{
                temp[j] = prev[j]%MOD;
            }
        }
        prev = temp;
    }
    return prev[m];
    
} 