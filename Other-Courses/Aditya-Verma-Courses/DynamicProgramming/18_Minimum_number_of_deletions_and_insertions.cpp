// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string a, string b) 
	{ 
	    int m = a.size();
	    int n = b.size();
	    int t[m+1][n+1];
	    for(int i=0 ;i<m+1 ; i++){
	        for(int j=0 ; j<n+1 ; j++){
	            if(i==0 or j==0){
	                t[i][j] = 0;
	            }
	        }
	    }
	    
	    for(int i=1 ;i<m+1 ; i++){
	        for(int j=1 ; j<n+1 ; j++){
	            if(a[i-1]==b[j-1]){
	                t[i][j] = 1+t[i-1][j-1];
	            }
	            else{
	                t[i][j] = max(t[i-1][j], t[i][j-1]);
	            }
	        }
	    }
	    int lcs = t[m][n];
	    int insertion;
	    int deletion;
	    if (m>=n){
	        insertion = m-lcs;
	        deletion = n-lcs;
	        return (insertion+deletion);
	    }
	    else{
	        insertion = n-lcs;
	        deletion = m-lcs;
	        return (insertion+deletion);
	    }
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends