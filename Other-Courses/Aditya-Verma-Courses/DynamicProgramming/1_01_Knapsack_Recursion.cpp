// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int maxProfit = 0;
    //Function to return max value that can be put in knapsack of capacity W.
    void solve(int W , int wt[] , int val[] , int i , int profit , int n){
        if(W<=0 or i==n){
            maxProfit = max(maxProfit, profit);
            return;
        }
        if(W-wt[i]>=0){
            solve(W-wt[i] , wt , val , i+1  , profit+val[i] , n);
            solve(W , wt , val , i+1  , profit , n);
        }
        solve(W , wt ,val ,i+1 , profit , n);
    }
    int knapsack(int W , int wt[] , int val[] , int n){
        if(n==0 or W==0){
            return 0;
        }
        if(wt[n-1]<=W){
            return max(val[n-1]+knapsack(W-wt[n-1] , wt , val , n-1) , 
            knapsack(W , wt , val , n-1) );
        }
        return knapsack(W , wt , val , n-1);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int ans = knapsack(W , wt , val , n);
       return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends