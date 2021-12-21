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
double PI = acos(-1);
const ll N = 10000000;

vi adj[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int x,y;
    rep(i,0,m){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << "Adjecenty List of Above graph is:\n";
    rep(i,1,n+1){
        cout << i << "->";
        vector<int> ::  iterator it;
        for(it = adj[i].begin() ; it!=adj[i].end() ; it++){
            cout << *it << " ";
        }
        cout << "\n";
    }

    return 0;
}