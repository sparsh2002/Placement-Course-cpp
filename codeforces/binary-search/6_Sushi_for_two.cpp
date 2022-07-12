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

ll n;
vi arr;

bool good(ll k){
    if(k%2==1) return false;
    ll i=0 , j = 0;
    int type1 = arr[0];
    while(j<n){
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){

            i++;
            j++;
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    rep(i,0,n) cin >> arr[i];
    ll l = 1 , r = n;
    ll ans = 1;
    while(l<=r){
        int m = (l+r)/2;
        if(good(m)){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }

    cout << ans << "\n";
    return 0;
}