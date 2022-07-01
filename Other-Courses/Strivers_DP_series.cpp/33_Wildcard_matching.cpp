class Solution {
public:
    // recursion + memization
    bool solve(int i , int j, string a , string b,vector<vector<int>>&dp){
        if(i<0 and j<0) return true;
        if(i<0 and j>=0) return false;
        if(i>=0 and j<0){
            for(int x=0 ; x<=i ; x++){
                if(a[x]!='*') return false;
            }
            return true;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j] or a[i]=='?'){
            return dp[i][j] = solve(i-1 , j-1 , a, b,dp);
        }
        if(a[i]=='*'){
            return dp[i][j] = solve(i-1 ,j , a,b,dp) 
                or solve(i , j-1 , a,b,dp);
        }
        return dp[i][j] =false;
    }
    
    bool isMatch(string a, string b) {
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(m , vector<int>(n,-1));
        return solve(m-1 , n-1 , b , a,dp);
    }
    
    
   
    bool isAllStars(string & S1, int i) {

      // S1 is taken in 1-based indexing
      for (int j = 1; j <= i; j++) {
        if (S1[j - 1] != '*')
          return false;
      }
      return true;
    }
    
     // tabulation
    bool isMatch(string b , string a){
        int n = a.size();
       int m = b.size();

        vector<vector<bool>> dp(n+1 ,vector<bool>(m+1, false));

        dp[0][0] = true;

        for (int j = 1; j <= m; j++) {
            dp[0][j] = false;
        }
        for (int i = 1; i <= n; i++) {
            dp[i][0] = isAllStars(a, i);
        }

        for(int i=1 ; i<n+1 ; i++){
            for(int j=1 ; j<m+1 ; j++){
                if(a[i-1]==b[j-1] or a[i-1]=='?'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(a[i-1]=='*'){
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                }
                else{
                    dp[i][j] = false;
                }
            }
        }

        return dp[n][m];
    }
};