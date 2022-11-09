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

ll getSign(ll n){
    if(n==0) return 0;
    if(n<1) return -1;
    return 1;
}

ll gcd(ll a , ll b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}

ll fact(ll n){
    ll ans = 1;
    for(ll i=1 ; i<=n ; i++){
        ans *= i;
    }
    return ans;
}

void printSign(ll sign){
    if(sign==0) return;
    if(sign==1) return;
    cout << "-";
}





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n , m;
    cin >> n >> m;
    vi num(n+1);
    vi den(m+1);
    read(num , n+1);
    read(den , m+1);
    ll numsign = getSign(num[0]);
    ll densign = getSign(den[0]);

    ll sign = numsign*densign;
    if(n>m){
        printSign(sign);
        cout << "Infinity";
        return 0;
    }
    if(m>n){
        cout << "0/1";
        return 0;
    }
    

    ll r = num[0];
    ll s = den[0];

    ll a = abs(r);
    ll b = abs(s);

    ll g = gcd(a , b);
    // cout << g << "\n";

    if(g>1){
        a = a/g;
        b = b/g;
    }

    
    
   
    printSign(sign);
    cout << abs(a) << "/" << abs(b);

    return 0;
}