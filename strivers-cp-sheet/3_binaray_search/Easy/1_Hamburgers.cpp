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

bool good(ll x , ll r ,vector<ll>&requirement ,vector<ll> &present , vector<ll>&price){
    vector<ll> need(3);

    for(ll i=0 ; i<3 ; i++){
        need[i] = requirement[i]*x;
        need[i] -= present[i];
    }

    ll money = 0;

    for(ll i=0 ; i<3 ; i++){
        if(need[i]>0)
            money += 1ll*need[i]*price[i];
    }

    return money<=r;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    ll nb , ns, nc;
    cin >> nb >> ns >> nc;
    ll pb , ps, pc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;

    vector<ll> requirement(3 , 0);

    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='B')requirement[0]++;
        else if(s[i]=='S') requirement[1]++;
        else requirement[2]++;
    }

    vector<ll> present;
    present.push_back(nb);
    present.push_back(ns);
    present.push_back(nc);

    vector<ll> price;
    price.push_back(pb);
    price.push_back(ps);
    price.push_back(pc);

    ll low = 0 , high = 1e15+1;

    ll ans = 0;

    while(low<=high){
        ll mid = low + (high-low)/2;
        if(good(mid , r,requirement , present , price)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    cout << ans << "\n";

    return 0;
}