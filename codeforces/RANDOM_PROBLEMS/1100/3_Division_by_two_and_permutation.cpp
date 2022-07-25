#include<bits/stdc++.h>
using namespace std;

static bool cmp(int a , int b){
    return a>b;
}

void solve(){
    int n;
    cin >> n;
    vector<int>a(n), used(n + 1, false);
    for(int i=0  ; i<n ; i++) cin >> a[i];
    sort(a.begin(), a.end() , cmp);
    bool ok = true;
    for(int i=0 ; i<n ; i++){
        int x = a[i];
        while(x > n or used[x])  x /= 2;
        if(x > 0) used[x] = true;
        else ok = false;
    }
    cout << (ok ? "YES" : "NO") << '\n';

}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}