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

int ans[105];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ,d , l;
    cin >> n >> d >> l;
    for(int i = 0; i < n - 1; i ++)
    {
        ans[i] = d > 0 ? l : 1;
        d = ans[i] - d;
    }
    ans[n - 1] = d;
    if(ans[n - 1] > l || ans[n - 1] < 1)
        cout << -1;
    else
    {
        for(int i = 0; i < n - 1; i++)
            cout << ans[i] << " ";
        cout << ans[n-1];
    }

    return 0;
}