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

int solve(int i , int j , string a , string b , vector<vector<int> > &dp){
    if(i==0){
        return j;
    }
    if(j==0){
        return i;
    }
    if(dp[i-1][j-1]!=-1) return dp[i-1][j-1];
    if(a[i-1]!=b[j-1]){
        int in = 1 + solve(i , j-1 , a , b,dp);
        int del = 1 + solve(i-1 , j , a , b,dp);
        int rep = 1 + solve(i-1 , j-1 , a , b,dp);
        return dp[i-1][j-1] = min( rep , min(in , del));
    }

    return dp[i-1][j-1] = solve(i-1 , j-1 , a,  b,dp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a , b;
    cin >> a >> b;
    if(a.size()<b.size()){
        string temp = a;
        a = b;
        b = temp;
    }
    int n = a.size();
    int m = b.size();
    // vector<vector<int> >  dp(n , vector<int>(m , -1));
    // cout << solve(n , m ,a , b , dp) << "\n";

    vector<vector<int> >  dp(n+1 , vector<int>(m+1 , 0));
    for(int i=0 ; i<n+1; i++){
        for(int j=0 ; j<m+1 ; j++){
            if(i==0){
                dp[i][j] = j;
            }
            if(j==0){
                dp[i][j] = i;
            }
        }
    }

    for(int i=1 ; i<n+1; i++){
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]!=b[j-1]){
                int in = 1 + dp[i][j-1];
                int del = 1 + dp[i-1][j];
                int rep = 1 + dp[i-1][j-1];
                dp[i][j] = min(rep , min(del , in));
            }
            else{
                dp[i][j] = dp[i-1][j-1];
            }
        }
    }

    cout << dp[n][m] << "\n";

    return 0;
}