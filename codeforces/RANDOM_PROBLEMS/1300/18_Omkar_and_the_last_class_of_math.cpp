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

bool isPrime(ll n){
    if(n<=1) return false;
    for(ll i=2 ; i*i<=n ; i++){
        if(n%i==0) return false;
    }
    return true;
}


ll gcd(ll a , ll b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        // if(isPrime(n)){
        //     cout << 1 << " " << n-1 << "\n";
        // }
        // else{
        //     int minn = INT_MAX;
        //     int num = n;
        //     for(ll i=2 ; i<=n-i ; i++){
        //         // if(n%i==0){
        //             ll lcm = (i*(n-i)/gcd(i , n-i));
        //             // cout << i << " " << n-i  << " " << lcm << "\n";
        //             if(lcm<minn){
        //                 minn =lcm;
        //                 num = i;
        //             }
        //         // }
        //     }
        //     cout << num << " " << n-num << "\n";
        //     // cout <<"\n";
        // }
        ll p = 0;
        for(ll i=2 ; i<=100000 ; i++){
            if(n%i==0){
                p = i;
                break;
            }
        }
        if(p==0){
            p = n;
        }

        cout << n/p << " " << n-n/p << "\n";

    }

    // cout << gcd(3 , 3) << "\n";

    return 0;
}