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

bool isBipartite(int node  , int prev, vector<int> &vis , vector<vector<int> > &adj){
    for(int i=0 ; i<adj[node].size() ; i++){
       if(vis[adj[node][i]]==-1){
           if(vis[node]==1) vis[adj[node][i]] = 0;
           else vis[adj[node][i]] = 1;
           return isBipartite(adj[node][i] , vis[adj[node][i]] , vis , adj);
       }
       else if(vis[adj[node][i]]==vis[node]){
        //    cout << node << " " << adj[node][i] << "\n";
           return false;
       }
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<vector<int> > adj;

    int n;
    cin >> n;
    
    vector<int> t;
    adj.push_back(t);

    for(int i=1 ; i<n ; i++){
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

    vector<int> vis(n , -1);

    bool ans = true;
    int prev = 1;
    for(int i=1 ; i<n ;i++){
        if(vis[i]==-1 and !isBipartite(i ,prev ,  vis , adj) ){
            ans = false;
            break;
        }
        
    }

    cout << ans << "\n";
    return 0;
}