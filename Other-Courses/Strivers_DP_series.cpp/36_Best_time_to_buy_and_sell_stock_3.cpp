class Solution {
public:
    int solve(int i , int buy , int cap , vector<int> &arr ,vector<vector<vector<int>>> &dp){
        if(cap==0) return 0;
        if(i==arr.size()) return 0;
        if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
        int profit;
        if(buy==1){
            profit = max(-arr[i]+solve(i+1, 0 , cap,arr,dp) ,
                         solve(i+1 , 1 , cap,arr,dp));
        }
        else{
            profit = max(arr[i]+solve(i+1, 1 , cap-1,arr,dp) , 
                         solve(i+1 , 0 , cap,arr,dp));
        }
        
        return dp[i][buy][cap] = profit;
    }
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<vector<vector<int>>> dp(n , 
                                       vector<vector<int>>(2 , vector<int>(3 , -1)));
        return solve(0 , 1 , 2 , arr ,dp);
    }
};