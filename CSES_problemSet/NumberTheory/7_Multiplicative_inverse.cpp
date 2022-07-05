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
// b inverse = (b to power (m-2))%m (only for prime m)

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

int inverse(int x , int m){
    return pw(x , m-2 , m);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,m;
    cin >> a >> b >> m;
    int res1 = (a/b)%m;
    a = a%m;
    int inv_b = inverse(b , m); 
    int res2 = a*inv_b%m;
    cout << res1 << " " << res2 << "\n";

    return 0;
}