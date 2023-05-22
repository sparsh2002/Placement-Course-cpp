// author: sparsh
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <bits/stdc++.h>
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

#define rep(i, a, b) for (int i = a; i < b; i++)
#define sort_v(arr) sort(arr.begin(), arr.end());
#define max_el(arr) *max_element(arr.begin(), arr.end());
#define min_el(arr) *min_element(arr.begin(), arr.end());
#define sort_vr(arr) sort(arr.rbegin(), arr.rend());
#define read(arr, n) rep(i, 0, n) cin >> arr[i];
#define print_v(arr, n) rep(i, 0, n) cout << arr[i] << ' ';
#define rep_rev(i, a, b) for (int i = a; i > b; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int cnt[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q, x, cnt2 = 0, cnt4 = 0;
    char type;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> x;
        
        cnt2 -= cnt[x] / 2;
        cnt4 -= cnt[x] / 4;
        cnt[x]++;
        cnt2 += cnt[x] / 2;
        cnt4 += cnt[x] / 4;
    }

    cin >> q;

    for (int i = 1; i <= q; ++i) {
        cin >> type >> x;
        cnt2 -= cnt[x] / 2;
        cnt4 -= cnt[x] / 4;
        
        if (type == '+') cnt[x]++;
        else cnt[x]--;
        
        cnt2 += cnt[x] / 2;
        cnt4 += cnt[x] / 4;
        
        if (cnt4 >= 1 && cnt2 >= 4) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}