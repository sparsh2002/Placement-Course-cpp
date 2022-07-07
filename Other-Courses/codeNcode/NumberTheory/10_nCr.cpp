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
double PI = acos(-1);

const ll N = 10000000;
int MOD = 1000000007;

int fact[N+1];
int invfact[N+1];

int pw(int a , int b , int m){
    if(b==0){
        return 1;
    }

    if(b%2==0){
        int t = pw(a , b/2 , m);
        return (1ll * t * t%m);
    }
    
    int t = pw(a , (b-1)/2 , m);
    t = (1ll * t * t)%m;
    return (1ll*a*t%m);
}



void init(){
    int p = MOD;
    fact[0] = 1;
    int i = 1;
    for(i=1 ; i<N ; i++){
        fact[i] = 1ll*i*fact[i-1]%p;
    }
    i--;
    invfact[i] = pw(fact[i] , p-2 , p);

    for(i-- ; i>=0 ; i--){
        invfact[i] = 1ll*invfact[i+1]*(i+1)%p;
    }
}

int nCr(int n , int r){
    if(r>n || n<0 || r<0) return 0;
    int res  = fact[n];
    res = 1ll*res*invfact[r]%MOD;
    res = 1ll*res*invfact[n-r]%MOD;
    return res;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    int n, r;
    cin >> n >> r;
    cout << nCr(n , r);

    return 0;
}