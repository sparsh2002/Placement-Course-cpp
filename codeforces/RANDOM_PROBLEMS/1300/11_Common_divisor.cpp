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


ll gcd(ll a , ll b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}

set<pair<ll,ll> > st;

void primeFactor(ll n){
    for(ll i=2 ; i*i<=n ; i++){
        if(n%i==0){
            ll ct = 0;
            while(n%i==0){
                ct++;
                n = n/i;
            }
            // st.insert(i);
            // cout << i << "^" << ct << "\n";
            st.insert(make_pair(i , ct));
        }
    }
    if(n>1){
        // cout << n << "^" << 1 << "\n";
        // st.insert(n);
        st.insert(make_pair(n , 1));
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vl arr(n);
    rep(i , 0,  n)  cin >> arr[i];
    ll g = arr[0];
    rep(i , 1 , n){
        g = gcd(g , arr[i]);
    }

    
    // cout << g << "\n";
    // st.insert(make_pair(g , 1));
    primeFactor(g);
    // st.insert(make_pair(1 , 1));
    
    
    set<pair<ll,ll> >::iterator it;
    ll ans = 1;
    
    for(it=st.begin() ; it!=st.end() ; it++){
        // cout << it->first << " " << it->second << "\n";
        ans *= (it->second+1);
    }

    cout << ans;

    
    return 0;
}