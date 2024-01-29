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
    int n , k , d;
    cin >> n >> k >> d;

    ll k_power_i = 1;

    

    for(int i=1 ; i<=d ; i++){
        k_power_i *= k;
        if(k_power_i>=n){
            cout << -1 << "\n";
            return 0;
        } 
    }

    int maxx_size = 1e3 + 20;
    vector<vector<int> > grid(n , vector<int> (n , 0));

    for(int i=1 ; i<n ; i++){
        for(int j=d-1 ; j>=0 ; j--){
            grid[i][j] = grid[i-1][j];
        }
        for (int j = d - 1; j >= 0; j --)
        {
            grid[i][j] = (grid[i][j] + 1) % k;
            if (grid[i][j]) break;
        }
    }

    rep(i , 0 , d){
        rep(j , 0 , n){
            cout << grid[i][j] + 1 << " ";
        }
        cout << "\n";
    }
    

    return 0;
}