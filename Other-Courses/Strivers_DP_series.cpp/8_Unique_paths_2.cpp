long long MOD = 1000000007;

// recursion + memoization
int solve(int i , int j , vector<vector<int>>&grid , vector<vector<long long>> &dp){
        if(i>=0 and j>=0 and grid[i][j]==-1) return 0;
        if(i==0 and j==0 ) return 1;
        if(i<0  or j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] = 
            (solve(i-1 , j, grid ,dp) +
            solve(i , j-1 , grid,dp))%MOD;
    }
int mazeObstacles(int n, int m, vector< vector< int> > &grid) {
     vector<vector<long long>> dp(n , vector<long long>(m , -1));
        return solve(n-1 , m-1 , grid , dp)%MOD;
}