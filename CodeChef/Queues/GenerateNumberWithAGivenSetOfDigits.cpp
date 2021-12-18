// #include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define rep(i,a,b) for(int i=a ; i<b ; i++)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
// double PI = acos(-1);

void solve(vector<int> arr , int n , int p){
    queue<int> q;
    for(int i=0 ; i<n ; i++){
        q.push(arr[i]);
    }
    int ct = 0;
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
        ct++;
    }
    while(ct<p){
        int x = q.front();
        q.pop();
        for(int i=0 ; i<n ; i++){
            int ans = stoi(to_string(x)+to_string(arr[i])) ;
            q.push(ans);
            cout << ans << " ";
            ct++;
            if(ct==p){
                break;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ,p;
    cin >> n >> p;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    solve(arr,n , p);
    return 0;
}