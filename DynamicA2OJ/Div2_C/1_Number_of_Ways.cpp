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
    ll n;
    cin >> n;
    vl a(n);
    read(a , n);
    ll ct = 0;

    vl arr(n , 0);
    arr[0] = a[0];
    rep(i , 1 , n){
        arr[i] = a[i] + arr[i-1];
    }


    rep(i, 0, n){
        ll first = arr[i];
        ll second = first*2;
        ll third = first*3;

        ll ss = lower_bound(arr.begin() + i , arr.end() , second)-arr.begin();
        if(ss==n){
            continue;
        }
        ll se = upper_bound(arr.begin() + i , arr.end() , second)-arr.begin();
        ll sc = se-ss;
        
        ll ts = lower_bound(arr.begin() + se , arr.end() , third)-arr.begin();
        if(ts==n){
            continue;
        }
        ll te = upper_bound(arr.begin() + se , arr.end() , third)-arr.begin();
        ll tc = te-ts;

        ct += sc*tc;


    }

    cout << ct << "\n";

    return 0;
}

// 5
// 1 2 3 0 3