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

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<char> > grid(n , vector<char>(n));
    vector<vector<int> > dp(n , vector<int>(n,0));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> grid[i][j];
            if(grid[i][j]=='*'){
                dp[i][j] = -1;
            }
        }
    }
    
    if(grid[0][0]=='*' or grid[n-1][n- 1]=='*'){
        cout << 0 << "\n";
        return 0 ;
    }
    dp[0][0] = 1;
    for(int j=1 ; j<n ; j++){
        dp[0][j] = dp[0][j-1];
        if(grid[0][j]=='*') dp[0][j] = -1;
    }
    for(int i=1 ; i<n ; i++){
        dp[i][0] = dp[i-1][0];
        if(grid[i][0]=='*') dp[i][0] = -1;
    }
    
    for(int i=1; i<n ; i++){
        for(int j=1 ; j<n ; j++){
            if(dp[i][j]!=-1){
                dp[i][j] = 0;
                if(dp[i-1][j]!=-1) dp[i][j] += dp[i-1][j];
                if(dp[i][j-1]!=-1) dp[i][j] += dp[i][j-1];
                dp[i][j] = dp[i][j]%MOD;
            }
        }
    }
    cout << dp[n-1][n-1] << "\n";
    return 0;
}