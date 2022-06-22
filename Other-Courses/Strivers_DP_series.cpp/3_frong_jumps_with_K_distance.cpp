#include<bits/stdc++.h>
using namespace std;


int frogJump(int n, int k, vector<int> &arr){
    vector<int> dp(n , -1);
    dp[0] = 0;
    for(int i=1 ; i<n ; i++){
        int minn = INT_MAX;
        for(int j=1 ; j<=k ; j++){
            int val = INT_MAX;
            if(i-j>=0){
                val = dp[i-j] + abs(arr[i]-arr[i-j]);
            }
            minn = min(minn , val);
        }
        dp[i] = minn;
    }
    
    return dp[n-1];
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout << frogJump(n , k,arr);
}
