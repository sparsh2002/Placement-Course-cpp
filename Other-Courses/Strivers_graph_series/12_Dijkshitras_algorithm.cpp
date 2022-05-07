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

vector<int> distanceVector(int src  ,vector<vector<pair<int,int> > > &adj ){
    priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > q;
    vector<int> dist(adj.size()+1 , INT_MAX);
    dist[src] = 0;
    q.push(make_pair(0,src));
    while(!q.empty()){
        pair<int,int> node = q.top();
        q.pop();
        for(int i=0 ; i<adj[node.second].size() ; i++){
            if(dist[node.second]+adj[node.second][i].second<dist[adj[node.second][i].first]){
                q.push(make_pair(dist[node.second]+adj[node.second][i].second , adj[node.second][i].first));
                dist[adj[node.second][i].first] = dist[node.second]+adj[node.second][i].second;
            }
        }
    }
    return dist;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , x;
    cin >> n >>  x;
    vector<pair<int,int> > t;
    vector<vector<pair<int,int> > > adj(n+1 , t);

    for(int i=0 ; i<x ; i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v,w));
    }

    // for(int i=1 ; i<n+1 ; i++){
    //     cout << i << "->";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << "(" << adj[i][j].first << "," << adj[i][j].second << ") ";
    //     }cout << "\n";
    // }

    vector<int> ans = distanceVector(1 , adj);
    rep(i,1,n+1){
        cout << ans[i] << " ";
    }
    return 0;
}