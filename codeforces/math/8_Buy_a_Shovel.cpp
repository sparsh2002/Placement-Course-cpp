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
    int k , r;
    cin >> k >> r;
    int ans = 10;
    for(int i=10 ; i>=1 ; i--){
        if((k*i)%10==0 or (k*i - r)%10==0){
            ans = i;
        }
    }
    cout << ans << "\n";
    return 0;
}