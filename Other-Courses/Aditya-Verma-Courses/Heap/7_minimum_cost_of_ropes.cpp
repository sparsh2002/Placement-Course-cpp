// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int ,pair<int,int >>> q;
        for(int i=0 ; i<arr.size() ; i++){
            q.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1] , {arr[i][0] , arr[i][1]}});
            if(q.size()>k){
                q.pop();
            }
        }
        while(!q.empty()){
            vector<int> temp(2);
            temp[0] = q.top().second.first;
            temp[1] = q.top().second.second;
            ans.push_back(temp);
            q.pop();
        }
        return ans;
    }
};

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}