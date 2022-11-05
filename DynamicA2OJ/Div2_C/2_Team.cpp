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


long long n, m, t, a[3000001], k;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    if (n - 1 <= m && m <= 2*(n + 1))
    {
        if (m == n - 1) {
            a[0] = -1;
            a[m + 1] = -1;
            t = n - 1;
        }
        else if (m == n)
        {
            a[m + 1] = -1;
            t = n;
        }
        else t = n + 1;
        k = m % t;
        if (k == 0 && m != t) k = n + 1;
        if (a[0] == -1) cout<<"0";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != -1){
                if (k > 0) cout<<"110";
                else cout<<"10";
                k--;
            }
        }
        if (a[m + 1] != -1) {
            if (k > 0) cout<<"11"<<endl;
            else cout<<"1"<<endl;
        }
    }
    else cout<<"-1"<<endl;

    return 0;
}