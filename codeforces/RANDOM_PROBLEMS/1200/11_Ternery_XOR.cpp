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
#define print_v(arr, n) rep(i, 0, n) cout << arr[i];
#define rep_rev(i, a, b) for (int i = a; i > b; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

string to_stringnum(vi &a)
{
    string ans = "";
    rep(i, 0, a.size())
    {
        ans += to_string(a[i]);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi x(n);
        rep(i, 0, n)
        {
            x[i] = s[i] - '0';
        }
        vi a1(n, 0);
        vi b1(n, 0);
        vi a2(n, 0);
        vi b2(n, 0);
        a1[0] = 1;
        b1[0] = 1;
        a2[0] = 1;
        b2[0] = 1;

        // rep(i , 1 , n){
        //     if(x[i]==1){
        //         a[i] = 0;
        //         b[i] = 1;
        //     }
        //     else if(x[i]==0){
        //         a[i] = 1;
        //         b[i] = 2;
        //     }
        //     else{
        //         a[i] = 1;
        //         b[i] = 1;
        //     }
        // }

        int i = 1;
        while (i < n)
        {
            if (x[i] == 2)
            {
                a1[i] = 1;
                b1[i] = 1;
                a2[i] = 1;
                b2[i] = 1;
            }
            else if (x[i] == 1)
            {
                a1[i] = 0;
                b1[i] = 1;
                a2[i] = 1;
                b2[i] = 0;
                break;
            }
            else
            {
                a1[i] = 0;
                b1[i] = 0;
                a2[i] = 0;
                b2[i] = 0;
            }
            i++;
        }
        i++;

        while (i < n)
        {
            a2[i] = 0;
            b2[i] = x[i];
            a1[i] = x[i];
            b1[i] = 0;
            i++;
        }

        string maxx1 = max(to_stringnum(a1), to_stringnum(b1));
        string maxx2 = max(to_stringnum(a2), to_stringnum(b2));

        if (maxx1 < maxx2)
        {
            print_v(a1, n);
            cout << "\n";
            print_v(b1, n);
            cout << "\n";
        }
        else
        {
            print_v(a2, n);
            cout << "\n";
            print_v(b2, n);
            cout << "\n";
        }
    }

    return 0;
}