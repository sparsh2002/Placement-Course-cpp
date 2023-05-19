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

int floor_div(int a , int b){
    if(b<0){
         b = -b;
         a = -a;
    }
    return a/b - (a%b<0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k++;
        string s;
        cin >> s;
        s += "1";
        // s = "1" + s;
        // n += 2;
        vi arr;
        int ct = 0;
        int cur= 0;
        for(char c:s)
            if(c=='0')
                cur++;
            else
                arr.push_back(cur),cur=0;
        // arr.push_back(n+k);
        // 10001
        int m = arr.size();
        for(int i=0 ; i<m ; i++){
            if(i==0&&i==m-1)
                ct+=(arr[i]+k-1)/k;
            else if(i==0||i==m-1)
                ct+=arr[i]/k;
            else
                ct+=(arr[i]-k+1)/k;
        }
        cout << ct <<  "\n";
    }

    return 0;
}