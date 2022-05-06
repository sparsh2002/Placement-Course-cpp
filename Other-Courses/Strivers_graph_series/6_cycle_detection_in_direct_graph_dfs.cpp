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

bool isCycle(int node , vector<bool> &vis , vector<bool> &dfs , vector<vector<int> > &adj){
    if(!vis[node]){
        vis[node] = true;
        dfs[node] = true;
        for(int i=0 ; i<adj[node].size() ; i++){
            if(dfs[adj[node][i]]){
            return true;
            }
            else if(!vis[adj[node][i]] and isCycle(adj[node][i] , vis , dfs , adj) ){
                return true;
            }
        }
    }
    dfs[node] = false;
    return false;
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

    // for(int i=1 ; i<n ; i++){
    //     cout << i << "->";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << adj[i][j] << " ";
    //     }cout << "\n";
    // }

    bool found = false;
    vector<bool> vis(n , false);
    vector<bool> dfs(n , false);
    for(int i=1 ; i<n ; i++){
        if(!vis[i] and isCycle(i , vis , dfs , adj)){
            found = true;
            cout << "YES" << "\n";
            break;
        }
    }
    if(!found){
        cout << "NO" << "\n";
    }
    return 0;
}