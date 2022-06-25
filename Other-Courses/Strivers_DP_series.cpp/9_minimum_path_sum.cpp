class Solution {
public:
    // recursion + memoization
    int solve(int i , int j , vector<vector<int>>&grid , vector<vector<int>>&dp){
        if(i==0 and j==0){
            return grid[i][j];
        }
        if(i<0 or j<0){
            return INT_MAX;
        }
        if(dp[i][j]!=-1) return dp[i][j];
         
        return dp[i][j] = grid[i][j] + min(solve(i-1 , j , grid,dp)  , solve(i , j-1 , grid,dp));
    }
    
    // tabulation
    int minPathSum1(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n , vector<int>(m ,-1));
        dp[0][0] = grid[0][0];
        for(int i=1 ; i<n ; i++){
            dp[i][0] = grid[i][0] + dp[i-1][0];
        }
        for(int j=1 ; j<m ; j++){
            dp[0][j] = grid[0][j] + dp[0][j-1];
        }
        
        for(int i=1 ; i<n ; i++){
            for(int j=1 ; j<m ; j++){
                dp[i][j] = grid[i][j] + min(dp[i-1][j] , dp[i][j-1]);
            }
        }
        return dp[n-1][m-1];
    }
    
    // space optimization
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> prev(m , 0);
        prev[0] = grid[0][0];
        for(int j=1 ; j<m ; j++){
            prev[j] = grid[0][j] + prev[j-1];
        }
        for(int i=1 ; i<n; i++){
            vector<int> temp(m , 0);
            temp[0] = grid[i][0] + prev[0];
            for(int j=1 ; j<m ; j++){
                temp[j] = grid[i][j] + min(prev[j] ,temp[j-1]);
            }
            prev = temp;
        }
        return prev[m-1];
    }
    
};