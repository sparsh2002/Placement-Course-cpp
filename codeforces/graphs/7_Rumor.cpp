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

void bfs(int node , ll &minn , vector<bool>&vis , vector<ll> &gold, vector<vector<int> > &adj){
    vis[node] = true;
    minn = min(minn ,gold[node]);
    for(int i=0 ; i<adj[node].size() ; i++){
        if(!vis[adj[node][i]]){
            bfs(adj[node][i] , minn ,vis , gold , adj );
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<ll> gold(n+1);
    for(int i=1 ; i<=n ; i++){
        cin >> gold[i];
    }
    vector<int> t;
    vector<vector<int> > adj(n+1 , t);

    for(int i=0 ; i<m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> vis(n+1 , false);

    ll ans = 0;

    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            ll minn = gold[i];
            bfs(i , minn , vis , gold , adj);
            ans += minn;
        }
    }

    cout << ans << "\n";

    return 0;
}