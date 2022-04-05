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


void dfsOfGraph(int node , vector<vector<int> >  &adj , vector<bool> &vis , vector<int> &dfs){
    dfs.push_back(node);
    vis[node] = true;
    for(int i=0 ; i<adj[node].size() ; i++){
        if(!vis[adj[node][i]]){
            dfsOfGraph(adj[node][i] , adj, vis , dfs);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int> > adj;

    int n;
    cin >> n;

    vector<int> t;
    adj.push_back(t);

    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        vector<int> temp;
        for(int j=0 ; j<x ; j++){
            int y;
            cin >> y;
            temp.push_back(y);
        }

        adj.push_back(temp);
    }


    vector<bool> vis(n+1 , false);
    vector<int> dfs;
    
    for(int i=1 ; i<=n ; i++){
        if(!vis[i])dfsOfGraph(i ,adj  , vis , dfs);
    }


    for(int i=0 ; i<dfs.size(); i++){
        cout << dfs[i] << " ";
    }

    return 0;
}