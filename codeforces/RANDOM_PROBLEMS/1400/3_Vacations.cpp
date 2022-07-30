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
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;
int n;
vi arr;

//  0 -> contest on prev day
//  1 -> gym on prev day
//  2 -> nothing on the prev day

int solve(int i , int prev , vector<vector<int> >& dp){
    if(i==n){
        return 0;
    }

    if(dp[i][prev]!=-1) return dp[i][prev];
    if(arr[i]==0){
        return dp[i][prev] =  solve(i+1  , 2 , dp);
    }
    else if(arr[i]==1){
        int ans1 = 0 , ans2 = 0;
        if(prev!=0){
            ans1 =  1 + solve(i+1 , 0,dp);
        }
        ans2 = solve(i+1 , 2,dp);
        return dp[i][prev] = max(ans1 , ans2);
    }
    else if(arr[i]==2){
        int ans1 = 0 , ans2 = 0;
        if(prev!=1){
            ans1 = 1 + solve(i+1 , 1,dp);
        }
        ans2 =  solve(i+1 , 2,dp);
        return dp[i][prev] =  max(ans1 , ans2);
    }
    int ans1 = 0 , ans2 = 0 , ans3 = 0;
    if(prev==0){
        ans1 = 1 + solve(i+1 , 1,dp);
    }
    if(prev==1){
        ans2 = 1 + solve(i+1 , 0,dp);
    }
    ans3 = solve(i+1 , 2,dp);
    return dp[i][prev] =  max(max(ans1 , ans2) , ans3);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    arr.clear();
    arr.resize(n);
    read(arr , n);
    vector<vector<int> >  dp(n, vector<int>(3 , -1));
    int x = solve(0,2, dp);
    // cout << x << "\n";
    cout << n-x << "\n";

    return 0;
}