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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n , l ,r;
        cin >> n >>  l >> r;
        vi arr(n);
        read(arr , n);
        sort_v(arr);
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += upper_bound(arr.begin(), arr.end(), r - arr[i]) - arr.begin();
            ans -= lower_bound(arr.begin(), arr.end(), l - arr[i]) - arr.begin();
            if (l <= 2 * arr[i] && 2 * arr[i] <= r) {
                ans--;
            }
        }
        cout << ans / 2 << "\n";
    }

    return 0;
}