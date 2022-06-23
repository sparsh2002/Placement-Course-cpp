// Recursion + memoization
int solve(int idx ,int prev ,vector<vector<int>>&grid,
         vector<vector<int>>&dp){
    if(idx==0){
        int maxx = 0;
        for(int i=0 ; i<3 ; i++){
            if(i!=prev){
                maxx = max(maxx , grid[idx][i]);
            }
        }
        return maxx;
    }
    if(dp[idx][prev]!=-1) return dp[idx][prev];
    int maxx = 0;
    for(int i=0 ; i<3 ; i++){
        if(i!=prev){
            maxx = max(maxx , grid[idx][i] + 
                       solve(idx-1 , i , grid,dp));
        }
    }
    return dp[idx][prev] = maxx;
}
int ninjaTraining(int n, vector<vector<int>> &grid)
{
    vector<vector<int>> dp(n , vector<int>(4 , -1));
    
    return solve(n-1 , 3 , grid , dp);
}

// tabulation
int ninjaTraining(int n, vector<vector<int>> &grid)
{
    vector<vector<int>> dp(n , vector<int>(4 , -1));
    dp[0][0] = max(grid[0][1], grid[0][2]);
    dp[0][1] = max(grid[0][0], grid[0][2]);
    dp[0][2] = max(grid[0][0], grid[0][1]);
    dp[0][3] = max(grid[0][0], 
                 max(grid[0][1], grid[0][2]));

    for (int day = 1; day < n; day++) {
    for (int last = 0; last < 4; last++) {
      dp[day][last] = 0;
      for (int task = 0; task <= 2; task++) {
        if (task != last) {
          int activity = grid[day][task] 
              + dp[day - 1][task];
          dp[day][last] = 
              max(dp[day][last], activity);
        }
      }
    }

  }

  return dp[n - 1][3];
    
}
// space optimization
int ninjaTraining(int n, vector < vector < int > > & points) {

  vector < int > prev(4, 0);

  prev[0] = max(points[0][1], points[0][2]);
  prev[1] = max(points[0][0], points[0][2]);
  prev[2] = max(points[0][0], points[0][1]);
  prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

  for (int day = 1; day < n; day++) {

    vector < int > temp(4, 0);
    for (int last = 0; last < 4; last++) {
      temp[last] = 0;
      for (int task = 0; task <= 2; task++) {
        if (task != last) {
          temp[last] = max(temp[last], points[day][task] + prev[task]);
        }
      }
    }

    prev = temp;

  }

  return prev[3];
}
