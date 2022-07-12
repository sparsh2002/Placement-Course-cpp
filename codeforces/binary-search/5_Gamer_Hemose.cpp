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

ll maxx1,maxx2;
ll n, h;
vi arr;
bool good(ll x){
    if(x%2==0){
        return ((maxx1+maxx2)*(x/2)>= h);
    }

    return ((maxx1*((x/2)+1)+maxx2*(x/2))>=h);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> h;
        arr.resize(n);
        rep(i, 0, n) cin >> arr[i];
        sort(arr.begin() , arr.end());
        maxx1 = arr[n-1];
        maxx2 = arr[n-2];
        ll l = 0 , r = 1e9 +1;
        ll ans = -1;
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
    }

    return 0;
}