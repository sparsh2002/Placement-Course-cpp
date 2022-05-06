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

bool isBipartite(int v ,  vector<vector<int> > &adj){
    
     vector<int> vis(v , -1);
        int prev = 1;
        for(int i=0 ; i<v ; i++){
            if(vis[i]==-1){
                queue<int> q;
                q.push(i);
                if(prev==1){
                    vis[i] = 0;
                    prev = 0;
                }
                else{
                    vis[i] = 1;
                    prev = 1;
                }
    
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
    
                    for(int j=0 ; j<adj[node].size() ; j++){
                        if(vis[adj[node][j]]==-1){
                            q.push(adj[node][j]);
                            if(vis[node]==1){
                                vis[adj[node][j]] = 0;
                                // prev = 0;
                            }
                            else{
                                vis[adj[node][j]] = 1;
                                // prev = 1;
                            }
                        }
                        else if(vis[node]==vis[adj[node][j]]){
                            // cout << adj[node][j] << "\n";
                            return false;
                        }
                        
                    }
                    if(vis[node]==1){
                        prev = 0;
                    }
                    else{
                        prev = 1;
                    }
                }
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

    cout << isBipartite(n , adj) << "\n";

    return 0;
}