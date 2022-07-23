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
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
		vector <long long> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		vector <long long> prefix_sums;
        prefix_sums.push_back(0);
		for(int i = 0; i < n; i++){
			prefix_sums.push_back(prefix_sums.back() + a[i]);
		}
		vector <long long> suffix_sums;
        suffix_sums.push_back(0);
		for(int i = n - 1; i >= 0; i--){
			suffix_sums.push_back(suffix_sums.back() + a[i]);
		}
		bool answer = false;
		for(int k = 1; k <= n; k++){
			if(2 * k + 1 <= n){
				long long blue_sum = prefix_sums[k + 1];
				long long red_sum = suffix_sums[k];
				if(blue_sum < red_sum){
					answer = true;
				}
			}
		}
		if(answer) cout << "YES\n";
		else cout << "NO\n";
    }

    return 0;
}