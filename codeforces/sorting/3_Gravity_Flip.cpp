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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m =100;
    int n;
    cin >> n;
    vi arr(n);
    rep(i , 0 , n) cin >> arr[i];
    vector<vector<int> > grid(m , vector<int>(n , 0));

    rep(i , 0 ,n){
        int x = arr[i];
        rep(j , 0 , x){
            grid[j][i] = 1;
        }
    }
    

    // rep(i , 0 , m){
    //     rep(j , 0 , n){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    rep(i , 0 , m){
        int sum = 0;
        rep(j , 0, n){
            sum += grid[i][j];
            grid[i][j] = 0;
        }
        rep_rev(j ,n-1 , -1 ){
            if(sum>0){
                grid[i][j] = 1;
                sum--;
            }
            
        }
    }

    // cout << "\n";
    // rep(i , 0 , m){
    //     rep(j , 0 , n){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    rep(i , 0 , n){
        int sum = 0;
        rep(j , 0 ,m ){
            sum += grid[j][i];
        }

        cout << sum << " ";
    }

    return 0;
}