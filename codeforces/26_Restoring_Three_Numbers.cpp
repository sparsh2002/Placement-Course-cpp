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
    ll x,y,z,w;
    cin >> x >> y >> z >> w;
    ll maxx = max(max(x,y) , max(z,w));
    if(maxx!=x){
        cout << maxx-x << " ";
    }
    if(maxx!=y){
        cout << maxx-y << " ";
    }
    if(maxx!=z){
        cout << maxx-z << " ";
    }
    if(maxx!=w){
        cout << maxx-w << " ";
    }
    

    return 0;
}