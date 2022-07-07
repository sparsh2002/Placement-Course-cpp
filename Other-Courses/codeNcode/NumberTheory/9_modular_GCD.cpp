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

ll pw(ll a , ll b , ll m){
    if(b==0){
        return 1;
    }

    if(b%2==0){
        ll t = pw(a , b/2 , m);
        return (1ll * t * t%m);
    }
    
    ll t = pw(a , (b-1)/2 , m);
    t = (1ll * t * t)%m;
    return (1ll*a*t%m);
}

ll solve(ll a , ll b , ll n){
    if(a==b){
        return (pw(a , n , MOD) + pw(b,n , MOD))%MOD;
    }

    ll candidate = 1;
    ll num = a-b;
    for(ll i=1 ; i*i<=num; i++){
        if(num%i==0){
            ll temp = (pw(a , n , i) + pw(b,n,i))%i;
            if(temp==0) candidate = max(candidate , i);
            temp = (pw(a , n , num/i) + pw(b,n,num/i))%(num/i);
            if(temp==0) candidate = max(candidate , num/i);
        }
    }

    return candidate;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll a , b,n;
        cin >> a >> b >> n;
        cout << solve(a , b, n) << "\n";
    }

    return 0;
}