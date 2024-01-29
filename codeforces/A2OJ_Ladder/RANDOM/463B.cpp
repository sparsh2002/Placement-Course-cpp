// author: sparsh
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define sort_v(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

  

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi arr(n+1);
    arr[0] = 0;
    rep(i , 1 , n+1){
        cin >> arr[i];
    }

    int ct = 0;
    int store = 0;

    rep(i , 1 , n+1){
        if(arr[i]>arr[i-1]){
            if(store>arr[i]-arr[i-1]){
                store -= arr[i]-arr[i-1];
            }
            else{
                ct += arr[i]-arr[i-1]-store;
                store = 0;
            }
            
        }
        else{
            store += arr[i-1]-arr[i];
        }
    }
    

    cout << ct <<"\n";

    return 0;
}