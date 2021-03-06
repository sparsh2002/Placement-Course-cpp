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
    ll n, s;
    cin >> n >> s;
    vl a(n);
    for (int i  = 1; i <= n; i++) cin >> a[i];
    ll l = 1, r = 1, sum = 0, res = 0;
    while(l <= n){
        while(r <= n && sum < s) sum += a[r++];
        if (sum < s) break;

        res += n - r + 2;
        sum -= a[l++];
    }
    cout << res << endl;
    return 0;
}