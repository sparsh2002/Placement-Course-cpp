class Solution {
public:
    // recursion + memoization
    int solve(int i , int j , vector<int>&arr , vector<vector<int>>&dp){
        if(i==arr.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int profit;
        if(j==1){
            profit = max(-arr[i]+ solve(i+1 , 0 ,arr,dp) , solve(i+1 , 1 , arr,dp));
        }
        else{
            profit = max(arr[i]+ solve(i+1 , 1 ,arr,dp) , solve(i+1 , 0 , arr,dp));
        }
        return dp[i][j] = profit;
    }
    // tabulation
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n+1 , vector<int> (2 , 0));
        dp[n][0] = dp[n][1] = 0;
        for(int i=n-1 ; i>=0 ; i--){
            for(int j=0 ; j<=1 ; j++){
                if(j==1)
                    dp[i][j] = max(-arr[i] + dp[i+1][0] , dp[i+1][1]);
                else 
                    dp[i][j] = max(arr[i]+ dp[i+1][1] , dp[i+1][0]);
            }
        }
        return dp[0][1];
    }
    // space optimization
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int prev0 = 0 , prev1 = 0;
        int curr;
        for(int i=n-1 ; i>=0 ; i--){
            for(int j=0 ; j<=1 ; j++){
                if(j==1){
                    curr = max(-arr[i] + prev0 , prev1);
                    prev1 = curr;
                } 
                else {
                    curr = max(arr[i]+ prev1 , prev0);
                    prev0 = curr;
                }
                    
            }
        }
        return curr;
    }
};