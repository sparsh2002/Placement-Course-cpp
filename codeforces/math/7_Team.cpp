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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int ans = 0;
    while(t--){
        int ct = 0;
        for(int i=0 ; i<3 ; i++){
            int x;
            cin >> x;
            if(x==1)ct++;
        }
        if(ct>=2){
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}