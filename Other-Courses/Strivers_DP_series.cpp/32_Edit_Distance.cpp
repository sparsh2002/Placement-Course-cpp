class Solution {
public:
    // recursion + memoization
    int solve(int i , int j , string a , string b,vector<vector<int>>&dp){
        if(i==0){
            return j;
        }
        if(j==0){
            return i;
        }
        if(i==1 and j==1){
            if(a[i-1]==b[j-1]){
                return 0;
            }
            return 1;
        }
       if(dp[i-1][j-1]!=-1) return dp[i-1][j-1];
       if(a[i-1]!=b[j-1]){
            int in = 1 + solve(i-1 , j , a, b,dp);
            int del = 1 + solve(i , j-1 , a, b,dp);
            int rep = 1+ solve(i-1 , j-1 , a , b, dp);
            return dp[i-1][j-1] = min(in , min(del , rep));
       }
       return dp[i-1][j-1] = solve(i-1 , j-1 , a , b,dp);
    }
    int minDistance(string a, string b) {
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(n , vector<int> (m , -1));
        return solve(n , m ,a , b,dp);
    }
    
    // tabulation
    int minDistance(string a, string b) {
        int n = a.size();
        int m = b.size();
        
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , INT_MAX));
    for(int i=0 ; i<n+1 ; i++){
        for(int j=0 ; j<m+1 ; j++){
            if(i==0){
                dp[i][j] = j;
            }
            if(j==0){
                dp[i][j] = i;
            }
        }
    }
    
    for(int i=1 ; i<n+1 ; i++){
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]!=b[j-1]){
                dp[i][j] = 1 + min(dp[i-1][j] , 
                          min(dp[i][j-1] , dp[i-1][j-1]));
            }
            else{
                dp[i][j] = dp[i-1][j-1];
            }
        }
    }
    
    return dp[n][m];
    }
    // space optimization
    int minDistance(string a, string b) {
        int n = a.size();
    int m = b.size();
    vector<int> prev(m+1 , INT_MAX);
    for(int j=0 ; j<m+1 ; j++){
        prev[j] = j;
    }
    
    for(int i=1 ; i<n+1 ; i++){
        vector<int> temp(m+1);
        temp[0] = i;
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]!=b[j-1]){
                temp[j] = 1 + 
                    min( prev[j], min(temp[j-1],
                                      prev[j-1]));
            }
            else{
                temp[j] = prev[j-1];
            }
        }
        prev= temp;
    }
    
    return prev[m];
    }
};