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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> t;
    vector<vector<int> > adj(n+1 , t);
    for(int i=0 ; i<m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for(int i=1 ; i<adj.size() ; i++){
    //     cout << i << "->";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << adj[i][j] << " ";
    //     }cout << "\n";
    // }

    int ct = 0;
    // bool yes = true;
    vector<bool> removed(n+1 , false);
    while(true){
        bool found = false;
        map<int,bool> mp;
        for(int i=0 ; i<adj.size() ; i++){
            if(adj[i].size()==1 and !mp[i] and !removed[i] ){
                found = true;
                removed[i] = true;
                int value = i;
                int index = adj[i][0];
                mp[index] = true;
                adj[index].erase(std::remove(adj[index].begin(), adj[index].end(), value), adj[index].end());
            }
        }
        if(found){
            ct++;
        }

        else if (!found){
            break;
        }

        else if(adj.size()==0){
            break;
        }
    }
    cout << ct << "\n";
    return 0;
}