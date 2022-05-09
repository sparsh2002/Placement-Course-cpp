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

void dfs(int node , int pr ,vector<int> &vis ,  vector<int> &rank , vector<vector<int> > &adj){
    vis[node] = 1;
    rank[node] += pr;
    for(int i=0; i<adj[node].size() ; i++){
        // if(!vis[adj[node][i]]){
            dfs(adj[node][i] , rank[node], vis , rank , adj );
        // }
        // else if(vis[adj[node][i]]==1 and rank[adj[node][i]]<rank[node]){
        //     dfs(adj[node][i] , rank[node], vis , rank , adj );
        // }
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
        if(x!=-1)adj[x].push_back(i);
    }
    // for(int i=1 ; i<=n  ; i++){
    //     cout << i << "-> ";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << adj[i][j] << " ";
    //     }cout << "\n";
    // }

    vector<int> rank(n+1 , 1);
    vector<int> vis(n+1 , 0);
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            dfs(i , 0 ,vis , rank , adj);
        }
    }
    // for(int i=1 ; i<=n ; i++){
    //     cout << i << ":" << rank[i] << "\n";
    // }
    int ans = *max_element(rank.begin() , rank.end());
    // if(ans<=3){
    //     cout << ans << "\n";
    // }
    // else{
    //     cout << 3 << "\n";
    // }

    cout << ans << "\n";
    return 0;
}