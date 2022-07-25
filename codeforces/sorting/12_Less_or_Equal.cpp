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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vi a(n);
    rep(i , 0 , n) cin >> a[i];
    sort_v(a);
    int ans;
	
	if (k == 0) {
		ans = a[0] - 1;
	} else {
		ans = a[k - 1];
	}
	
	int cnt = 0;
	
	for (int i = 0; i < n; ++i)
		if (a[i] <= ans) ++cnt;
	
	if (cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000)) {
		cout << -1 << "\n";
		return 0;
	}
	
	cout << ans << "\n";

    return 0;
}