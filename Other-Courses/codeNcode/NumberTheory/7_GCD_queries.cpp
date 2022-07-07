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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;


int gcd(int a , int b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, q , l ,r;
        cin >> n >> q;
        vi arr(n);
        rep(i, 0,n) cin >> arr[i];
        vi gcd_arr(n);
        vi gcd_arr_rev(n);
        int ans = 0;
        rep(i , 0 , n){
            ans = gcd(ans , arr[i]);
            gcd_arr[i] = ans;
        }
        ans = 0;
        rep_rev(i , n-1 , -1){
            ans = gcd(ans , arr[i]);
            gcd_arr_rev[i] = ans;
        }
        rep(k, 0,q){
            cin >> l >> r;
            l--;
            r--;
            cout << gcd(gcd_arr[l-1] , gcd_arr_rev[r+1]) << "\n";
        }
    }

    return 0;
}