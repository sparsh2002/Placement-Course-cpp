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
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       solve(W , wt , val , 0 , 0 , n);
       return maxProfit;
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