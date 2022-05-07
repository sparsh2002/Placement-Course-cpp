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

int shortestPath(int src  , int dst , vector<vector<int> > &adj){
    vector<int> dist(adj.size()+1 , INT_MAX);
    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i=0 ; i<adj[node].size() ; i++){
            if(dist[node]+1<dist[adj[node][i]]){
                q.push(adj[node][i]);
                dist[adj[node][i]] = dist[node]+1;
            }
        }
    }
    return dist[dst]-dist[src];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> t;
    vector<vector<int> > adj(n+1 , t);
    for(int i=0 ; i<n+1 ; i++){
        int x;
        cin >> x;
        vector<int> temp;
        for(int j=0 ; j<x ; j++){
            int y;
            cin >> y;
            temp.push_back(y);
        }

        adj[i] = temp;
    }

    // for(int i=0 ; i<n+1 ; i++){
    //     cout << i << "->";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << adj[i][j] << " ";
    //     }cout << "\n";
    // }

    int src , dst;
    cin >> src >> dst;
    cout << shortestPath(src , dst , adj) << "\n";
    return 0;
}