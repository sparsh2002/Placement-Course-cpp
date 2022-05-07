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

int bfs( vector<int>&vis , vector<int>&indegree , vector<vector<int> > &adj){
    int ct =0;
    queue<int> q;
    for(int i=0 ; i<indegree.size() ; i++){
        if(indegree[i]==0) q.push(i);
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        // cout << node << " ";
        ct++;
        for(int i=0 ; i<adj[node].size() ; i++){
            indegree[adj[node][i]]--;
            if(indegree[adj[node][i]]==0)q.push(adj[node][i]);
        }
    }
    // cout << "\n";
    return ct;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v , e;
    cin >> v >> e;
    vector<int> t;
    vector<vector<int> > adj(v+1 , t);
    for(int i=0 ; i<e ; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    bool yes = false;
    int ct =0;
    vector<int> vis(v+1 , 0);
    vector<int> indegree(v+1 , 0);
    for(int i=0 ; i<adj.size() ; i++){
        for(int j=0 ; j<adj[i].size() ; j++){
            indegree[adj[i][j]]++;
        }
    }
    
    ct =  bfs(vis , indegree , adj);
    
    // cout << ct << "\n";
    if(ct==v+1){
        cout << "NO" << "\n";
    }
    else{
        cout << "YES" << "\n";
    }

    return 0;
}