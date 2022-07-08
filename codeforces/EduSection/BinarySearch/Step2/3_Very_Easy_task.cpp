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

int n , x , y;

bool good(int t){
    return (t/x + t/y)>=(n-1);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x >> y;
    if(n==1){
        cout << min(x , y) << "\n";
    }
    else{
        int l = 0;  // l is bad
        int r = 1e9; // r is good
        while(r>l+1){
            int m = (l+r)/2;
            if(good(m)){
                r = m;
            }
            else{
                l = m;
            }
        }
        cout <<  r +min(x,y) << "\n";
    }
    
    return 0;
}