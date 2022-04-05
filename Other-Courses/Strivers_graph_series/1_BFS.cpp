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

vector<int> bfsOfGraph(int v , vector<vector<int> > &adj){
    vector<int> bfs;
    vector<int> vis(v , 0);

    for(int i=1 ; i<v ; i++){
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);


                for(int j=0 ; j<adj[node].size() ; j++){
                    if(!vis[adj[node][j]]){
                        q.push(adj[node][j]);
                        vis[adj[node][j]] = 1;
                    }
                }
            }
        }
    }

    return bfs;
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

    vector<int> ans =  bfsOfGraph(n ,adj );


    for(int i=0 ; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}