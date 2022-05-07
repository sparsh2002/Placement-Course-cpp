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

void dfs(int node , vector<int>&vis , stack<int> &st ,vector<vector<int> > &adj ){
    vis[node] = 1;
    for(int i=0 ; i<adj[node].size() ; i++){
        if(!vis[adj[node][i]]){
            dfs(adj[node][i] , vis, st , adj);
        }
    }
    st.push(node);
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

    // for(int i=0 ; i<v+1 ; i++){
    //     cout << i << "->";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << adj[i][j] << " ";
    //     }cout << "\n";
    // }

    stack<int> st;
    vector<int> vis(v+1 , 0);

    for(int i=0 ; i<v+1 ; i++){
        if(!vis[i]){
            dfs(i , vis ,st , adj);
        }
    }

    while(!st.empty()){
        int x = st.top();
        st.pop();
        cout << x << " ";
    }
    return 0;
}