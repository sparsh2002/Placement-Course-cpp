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

ll binPow(ll a, ll b){
    ll res = 1;
    while(b>0){
        if(b&1)
            res = res*a;

        a = a * a;
        b = b >> 1;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,b;
    cin >> a >> b;
    cout << binPow(a , b) << "\n";
    return 0;
}