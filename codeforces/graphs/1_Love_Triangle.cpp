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

bool isCycle(int node , int prev  , vector<int>&vis , vector<vector<int> > &adj){
    vis[node] = 1;
    for(int i=0 ; i<adj[node].size() ; i++){
        if(!vis[adj[node][i]] and isCycle(adj[node][i] , node , vis , adj)){
            return true;
        }
        else if(vis[adj[node][i]]==1 and prev!=node){
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> t;
    vector<vector<int> > adj(n+1 , t);
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        adj[i+1].push_back(x);
    }

    vector<int> vis(n+1 , 0);
    bool yes = false;
    for(int i=1 ; i<n+1 ; i++){
        if(!vis[i]  and isCycle(i ,-1 ,  vis , adj)){
            yes = true;
            break;
        }
    }

    if(yes){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}