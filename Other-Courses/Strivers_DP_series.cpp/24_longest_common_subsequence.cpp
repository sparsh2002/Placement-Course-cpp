#include<bits/stdc++.h>

// recursoin + memoization
int solve(int n , int m , string a , string b , vector<vector<int>>& dp ){
    if(n==0 or m==0){
        return 0;
    }
    if(dp[n-1][m-1]!=-1) return dp[n-1][m-1];
    if(a[n-1]==b[m-1]){
        return 1 + solve(n-1 , m-1 , a , b,dp);
    }
    return dp[n-1][m-1] =  max(solve(n-1 , m , a, b,dp) , 
               solve(n , m-1 , a ,b,dp));
}

// tabulation
int lcs(string a, string b)
{
	int n = a.size() , m = b.size();
    vector<vector<int>> dp(n+1 , vector<int>(m+1 , -1));
    
    for(int i=0 ; i<n+1 ; i++){
        for(int j=0 ; j<m+1 ; j++){
            if(i==0 or j==0){
                dp[i][j] = 0;
            }
        }
    }
    
    for(int i=1 ; i<n+1 ; i++){
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    
    return dp[n][m];
}

// space optimization
int lcs(string a, string b)
{
    int n = a.size() , m = b.size();
    vector<int> prev(m+1 , 0);
    for(int i=1 ; i<n+1 ; i++){
        vector<int> temp(m+1 , 0);
        temp[0] = 0;
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]==b[j-1]){
                temp[j] = 1 + prev[j-1];
            }
            else{
                temp[j] = max(temp[j-1] , prev[j]);
            }
        }
        prev= temp;
    }
    
    return prev[m];
}