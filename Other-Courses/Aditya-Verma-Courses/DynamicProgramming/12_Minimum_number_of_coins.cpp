// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int maxx = 10000001;
	int minCoins(int coins[], int m, int v) 
	{ 
	    int dp[m+1][v+1];
	    for(int i=0;i<m+1;i++)
	    {
	        for(int j=0;j<v+1;j++)
	        {
	            //max for choose minimum 
	            if(i==0)
	            { 
	                dp[i][j] = maxx;
	            }
	            if(j==0)
	            {
	                dp[i][j] = 0;
	            }
	        }
	    }
	    
	    for(int i=1;i<m+1;i++)
	    {
	        for(int j=1;j<v+1;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                // plus 1 for modulas and min for choose minimum coins
	                dp[i][j] = min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
	            }
	            
	            else
	            {
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    
	    if(dp[m][v]==maxx)
	    {
	        return -1;
	    }
	    return dp[m][v];
	    
	} 

	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends