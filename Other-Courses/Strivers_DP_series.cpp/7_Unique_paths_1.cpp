class Solution {
public:
    // we'll be moving from bottom right to top left
    // recursion + memoization
    int solve(int m , int n , vector<vector<int>>&dp){
        if(m==1 and n==1){
            return 1;
        }
        if(dp[m][n]!=-1) return dp[m][n];
        int ans = 0;
        if(m-1>=1)ans += solve(m-1 , n ,dp);
        if(n-1>=1)ans += solve(m , n-1 ,dp);
        return  dp[m][n] = ans;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1 , vector<int>(n+1 , -1));
        
        return solve(m , n , dp);
    }
    
    // tabulation (0,0 to m-1, n-1)
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int>(n , -1));
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(i==0 and j==0){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] = 0;
                    if(i-1>=0) dp[i][j] += dp[i-1][j];
                    if(j-1>=0) dp[i][j] += dp[i][j-1];
                }
            }
        }
        
        return dp[m-1][n-1];
    }
    
    // space optimization
    int uniquePaths(int m, int n) {
        vector<int> prev(n , 1);
        for(int i=1 ; i<m ; i++){
            vector<int> temp(n , 0);
            temp[0] = 1;
            for(int j=1 ; j<n ; j++){
                temp[j] = temp[j-1] + prev[j];
            }
            prev = temp;
        }
        
        
        return prev[n-1];
    }
    
};