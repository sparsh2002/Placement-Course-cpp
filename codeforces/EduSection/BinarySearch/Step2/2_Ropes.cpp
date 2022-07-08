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

int n, k;
vi arr;

bool good(double x){
    int s = 0;
    for(int i=0 ; i<n ; i++){
        s += floor(arr[i]/x);
    }
    return s>=k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    arr.resize(n);
    
    rep(i, 0, n) cin >> arr[i];
    
    double l = 0; // good
    double r = 1e8; // not good

    rep(i , 0 , 100){
        double m = (l+r)/2;
        if(good(m)){
            l = m;
        }
        else{
            r = m;
        }
    }

    cout << setprecision(20) << l << "\n";
    return 0;
}