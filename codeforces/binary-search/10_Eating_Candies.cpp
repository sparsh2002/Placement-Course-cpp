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
        int n;
        cin >> n;
        vi arr(n);
        read(arr , n);
        vi prefix(n);
        prefix[0] = arr[0];
        rep(i , 1 , n) prefix[i] = arr[i] + prefix[i-1];
        vi suffix(n);
        suffix[n-1] = arr[n-1];
        rep_rev(i , n-2 , -1) suffix[i] = arr[i] + suffix[i+1];
        
        int ans = 0;
        // print_v(prefix , prefix.size());
        // cout << "\n";
        // print_v(suffix , suffix.size());
        // cout << "\n";
        reverse(suffix.begin() , suffix.end());
        vector<int>::iterator it;
        rep(i , 0 , n){
            int x = prefix[i];
            it = lower_bound(suffix.begin() , suffix.end() , x);
            if(it!=suffix.end()){
                int j=it - suffix.begin();
                int idx = n-j-1;
                // cout << i << " " << j << " " << x << " " << *it << "\n";
                if(i<idx and x== (*it)){
                    ans = i+j+2;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}