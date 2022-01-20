// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    vector<string> ans;
    void solve(string op , int one , int zero  , int n){
        if(n==0){
            ans.push_back(op);
            return;
        }
        
        string op1 = op;
        string op2 = op;
        op1 = op1 + "1";
        op2 = op2 + "0";
        solve(op1 , one+1 , zero , n-1);
        if(one>=zero)
            solve(op2 , one , zero+1 , n-1);
         
    }
	vector<string> NBitBinary(int n)
	{
	    string op = "1";
	    int one = 0 , zero = 0;
	    solve(op ,one , zero ,n-1);
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends