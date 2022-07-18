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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    vl a(n);
    vl b(m);
    rep(i , 0, n) cin >> a[i];
    rep(i , 0, m) cin >> b[i];

    map<ll, ll> mp1;
    map<ll , ll > mp2;
    rep(i , 0 , n) mp1[a[i]]++;
    rep(i , 0 , m) mp2[b[i]]++;

    int ct = 0;
    map<ll,ll>::iterator it;
    for(it = mp1.begin() ; it!=mp1.end() ; it++){
        if(mp2.find(it->first)!=mp2.end()){
            ct += it->second*mp2[it->first];
        }
    }
    cout << ct;
    return 0;
}