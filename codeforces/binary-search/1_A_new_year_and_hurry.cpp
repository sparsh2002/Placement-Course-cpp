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

bool good(int x , int k){
    return (240-k>=((x*(x+1)/2)*5));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int l = 0, r = n;
    int ans =0;
    while(l<=r){
        int m = (l+r)/2;
        if(good(m,k)){
            ans = m;
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    cout << ans << "\n";
    return 0;
}