// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int t[1001][1001];
    int knapsack(int W , int wt[] , int val[] , int n){
        if(n==0 or W==0){
            return 0;
        }
        if(t[W][n]!=-1){
            return t[W][n];
        }
        if(wt[n-1]<=W){
            return t[W][n] = max(val[n-1]+knapsack(W-wt[n-1] , wt , val , n-1) , 
            knapsack(W , wt , val , n-1) );
        }
        return t[W][n] = knapsack(W , wt , val , n-1);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       memset(t,-1,sizeof(t));
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