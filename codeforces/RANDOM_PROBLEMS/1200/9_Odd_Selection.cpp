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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vi arr(n);
        read(arr, n);
        int odd = 0, even = 0;
        rep(i, 0, n)
        {
            if (arr[i] & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if (x & 1)
        {
            if (odd == 0)
            {
                cout << "No"
                     << "\n";
                continue;
            }
            if (odd & 1)
            {
                x -= odd;
                x -= even;
                if (x <= 0)
                {
                    cout << "Yes"
                         << "\n";
                    continue;
                }
                else
                {
                    cout << "No"
                         << "\n";
                    continue;
                }
            }
            else
            {
                x -= (odd - 1);
                x -= even;
                if (x <= 0)
                {
                    cout << "Yes"
                         << "\n";
                    continue;
                }
                else
                {
                    cout << "No"
                         << "\n";
                    continue;
                }
            }
        }
        else
        {
            if (even == 0 or odd==0)
            {
                cout << "No"
                     << "\n";
                continue;
            }
            if(even&1){
                x -= even;
                x -= odd;
                if (x <= 0)
                {
                    cout << "Yes"
                         << "\n";
                    continue;
                }
                else
                {
                    cout << "No"
                         << "\n";
                    continue;
                }
            }
            else{
                if(even>1){
                    x -= (even-1);
                    x -= odd;
                    if (x <= 0)
                    {
                        cout << "Yes"
                            << "\n";
                        continue;
                    }
                    else
                    {
                        cout << "No"
                            << "\n";
                        continue;
                    }
                }
                else{
                     cout << "No"
                         << "\n";
                    continue;
                }
            }
        }
    }

    return 0;
}