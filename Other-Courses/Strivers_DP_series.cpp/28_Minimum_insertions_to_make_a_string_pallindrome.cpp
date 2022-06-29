#include<bits/stdc++.h>
int minInsertion(string &a)
{
    string b = a;
    int n = a.size();
    reverse(b.begin() , b.end());
    vector<vector<int>> dp(n+1 , vector<int>(n+1, 0));
    for(int i=1 ; i<n+1 ; i++){
        for(int j=1 ; j<n+1 ; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    
    return n-dp[n][n];
}