#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    int n = arr.size();
    vector<int> minn(n);
    minn[0] = INT_MAX;
    for(int i=1 ; i<n ; i++){
        minn[i] = min(minn[i-1], arr[i-1]);
    }
    int ans = 0;
    for(int i=1 ; i<n ; i++){
        ans = max(arr[i] - minn[i] , ans);
    }
    return ans;
}

int maximumProfit(vector<int> &arr){
    int n = arr.size();
    int minn = INT_MAX;
    int ans = 0;
    for(int i=1 ; i<n ; i++){
        minn = min(minn , arr[i-1]);
        ans = max(ans , arr[i]-minn);
    }
    return ans;
}