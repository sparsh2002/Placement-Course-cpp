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
    int n , m, d;
    cin >> n >> m >> d;
    vector<vector<int> >  grid(n , vector<int>(m));

    rep(i , 0 , n){
        rep(j , 0 , m){
            cin >> grid[i][j];
        }
    }

    int minn = INT_MAX;

    int rem = grid[0][0]%d;

    bool yes = true;
    set<int> st;
    int ans = 0;

    rep(i, 0 , n){
        rep(j , 0 , m){
            st.insert(grid[i][j]);
        }
    }

    rep(i, 0, n){
        rep(j , 0 , m){
            if(grid[i][j]%d!=rem){
                yes = false;
            }
        }
    }

    if(yes){
        for(auto it:st){
            ans = 0;
            rep(i, 0, n){
                rep(j , 0 , m){
                    ans += abs(grid[i][j]-it)/d;
                }
            }

            minn = min(minn , ans);
        }

        cout << minn << "\n";
    }
    else{
        cout << -1 << "\n";
    }

    return 0;
}