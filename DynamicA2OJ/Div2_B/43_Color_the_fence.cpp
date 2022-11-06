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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v;
    cin >> v;
    int minn = INT_MAX;
    int idx = -1;

    int n = 9;

    vi cost(n , 0);
    rep(i ,0 , n){
        int x;
        cin >> x;
        cost[i] = x;
        if(x<=minn){
            minn = x;
            idx = i+1;
        }
        // cout << i+1 << " " << cost[i] << "\n";
    }

    if(minn>v){
        cout << -1 << "\n";
    }
    else{
        int ct = v/minn;
        vi ans(ct , idx);
        int left  = v-minn*ct;
        // cout << left << "\n";
        vector<bool> vis(ct, false);
        int j = 0;
        for(int i=n-1 ; i>=0 ; i--){
            int now = cost[i]-minn;
            // cout << i+1 << " " << cost[i] << " " << now << "\n";
            while(now<=left and i>=idx){
                vis[j] = true;
                left -= now;
                ans[j] = i+1;
                j++;
            }
        }

       rep(i ,0 , ct) cout << ans[i];
    }

    return 0;
}