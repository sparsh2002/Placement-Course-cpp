#include<bits/stdc++.h>
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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;
int n , k;
vi arr;

bool good(ll sum){
    int ct = 1;
    ll x = 0;
    rep(i , 0, n){
        if(arr[i]>sum) return false;
        else if(x+arr[i]>sum){
            ct++;
            x = arr[i];
        }
        else{
            x += arr[i];
        }
    }

    return ct<=k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    arr.resize(n);
    rep(i , 0 , n) cin >> arr[i];
    ll l = *max_element(arr.begin() , arr.end());
    ll r = 0;
    r = accumulate(arr.begin() , arr.end() , r)+1;
    ll ans = 1e17;
    while(l<=r){
        ll m = (l+r)/2;
        if(good(m)){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    cout << ans << "\n";

    return 0;
}