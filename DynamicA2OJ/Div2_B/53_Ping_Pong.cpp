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

int a[111],b[111];
 
bool f[111];
int n = 0;
void dfs(int i)
{
    f[i] = true;
    for(int k = 1; k <= n;k++)
    {
        if(f[k])
            continue;
        if(a[i]>a[k] && a[i] < b[k])
            dfs(k);
        else if(b[i] > a[k] && b[i] < b[k])
            dfs(k);
    }
}
 
 
int k;
 
int main()
{
    cin >> k;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(f,0,sizeof(f));
    for(int i = 1; i <= k; i++)
    {
        int x,y,m;
        cin >> m;
        if(m == 1)
        {
            n++;
            cin >> a[n];
            cin >> b[n];
        }
        if(m == 2)
        {
            cin >> x;
            cin >> y;
            memset(f,0,sizeof(f));
            dfs(x);
            if(f[y])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}