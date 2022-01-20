// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int solve(vector<int> &arr , int k , int index){
        if(arr.size()==1){
            return arr[0];
        }
        index = (index+k)%(arr.size());
        arr.erase(arr.begin() + index);
        return solve(arr , k , index);
    }
    int safePos(int n, int k) {
        k--;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            arr[i] = i+1;
        }
        int ans = solve(arr ,k , 0);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends