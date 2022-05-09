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

void dfs(int node , vector<int> &vis , vector<vector<int> > &adj){
    vis[node] = 1;
    for(int i=0 ; i<adj[node].size() ; i++){
        if(vis[adj[node][i]]){
            cout << adj[node][i] << " ";
            return ;
        }
        dfs(adj[node][i] , vis , adj);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> t;
    vector<vector<int> > adj(n+1 , t);
    for(int i=1 ; i<=n ; i++){
        int x;
        cin >> x;
        adj[i].push_back(x);
    }

    for(int i=1 ; i<n+1 ; i++){
        vector<int> vis(n+1 , 0);
        dfs(i , vis , adj);
    }

    return 0;
}