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
const long double eps = 1e-10L;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll r, x, y, xx, yy;
    cin >> r >> x >> y >> xx >> yy;
    ll d = (x - xx) * (x - xx) + (y - yy) * (y - yy);
    long double dd = sqrt(1.0L * d);
    r = r + r;      
    long double res = dd / (1.0L * r);
    long long p = (long long)res;
    if (fabs(1.0L * p * 1.0L * r - dd) > eps)
        p++;
    cout << p << endl;

    return 0;
}