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
    ll n,m,k;
    cin >> n >> m >> k;
    vl ap(n);
    multiset<ll> cus;
    rep(i , 0, n)  cin >> ap[i];
    rep(i , 0 , m) {
        ll x;
        cin >> x;
        cus.insert(x);
    }

    sort_v(ap);
    multiset<ll>::iterator  it;
    int ct = 0;
    rep(i , 0, n){
        int x = ap[i];
        it = cus.lower_bound(x-k);
        if(it==cus.end()){
            break;
        }
        if(abs(*it - x)<=k){
            ct++;
            cus.erase(it);
        }
    }

    cout << ct << "\n";
    return 0;
}