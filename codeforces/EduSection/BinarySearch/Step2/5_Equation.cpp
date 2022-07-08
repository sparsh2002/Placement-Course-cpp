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
double c;

bool good(double x){
    return (x*x + sqrt(x)) >= c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> c;
    double l = 1;
    double r = 1e6;
    rep(i , 0 , 100){
        double m = (l+r)/2;
        if(good(m)){
            r = m;
        }
        else{
            l = m;
        }
    }
    cout << setprecision(20) <<  r << "\n";
    return 0;
}