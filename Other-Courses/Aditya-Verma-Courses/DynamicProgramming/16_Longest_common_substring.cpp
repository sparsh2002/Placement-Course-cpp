// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int longestCommonSubstr (string A, string B, int n, int m)
    {
       
        int maxx=0;
        if(n==0 || m==0)
        {
            return 0;
        }
        
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                    maxx = max(maxx,dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        
        return maxx;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends