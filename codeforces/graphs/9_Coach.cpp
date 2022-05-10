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

vector<vector<vector<int> > > v(4);
bool yes = true;

void dfs(int node , vector<int>&temp ,vector<bool>&vis , vector<vector<int> > &adj){
    vis[node] = true;
    temp.push_back(node);
    for(int i=0 ; i<adj[node].size() ; i++){
        if(!vis[adj[node][i]]){
            dfs(adj[node][i] , temp, vis , adj );
        }
    }

    if(temp.size()>3) yes  = false;
    else v[temp.size()].push_back(temp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> t;
    vector<vector<int> > adj(n+1 , t);
    for(int i=0 ; i<m ; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for(int i=1 ; i<=n ; i++){
    //     cout << i << "->";
    //     for(int j=0 ; j<adj[i].size() ; j++){
    //         cout << adj[i][j] << " ";
    //     }cout << "\n";
    // }
    vector<bool> vis(n+1 , false);
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            vector<int> temp;
            dfs(i , temp ,vis , adj);
        }
    }
    set<vector<int> > s1;
    set<vector<int> > s2;
    set<vector<int> > s3;
    for(int i=1 ; i<v.size() ; i++){
        for(int j=0 ; j<v[i].size() ; j++){
            if(i==1) s1.insert(v[i][j]);
            else if(i==2) s2.insert(v[i][j]);
            else s3.insert(v[i][j]);
        }
    }

    set<vector<int> >::iterator it;
    // for(it = s1.begin() ; it!=s1.end() ; it++ ){
    //     vector<int> x = *it;
    //     for(int i=0 ; i<x.size() ; i++){
    //         cout << x[i] << " ";
    //     }cout << "\n";
    // }cout <<"\n";
    // for(it = s2.begin() ; it!=s2.end() ; it++ ){
    //     vector<int> x = *it;
    //     for(int i=0 ; i<x.size() ; i++){
    //         cout << x[i] << " ";
    //     }cout << "\n";
    // }cout << "\n";
    // for(it = s3.begin() ; it!=s3.end() ; it++ ){
    //     vector<int> x = *it;
    //     for(int i=0 ; i<x.size() ; i++){
    //         cout << x[i] << " ";
    //     }cout << "\n";
    // }

    if(!yes){
        cout << -1 << "\n";
        return 0;
    }
    if(s2.size()>s1.size()){
        cout << -1 << "\n";
        return 0;
    }
    
    
    // printing the answers
    for(it = s3.begin() ; it!=s3.end() ; it++ ){
        vector<int> x = *it;
        for(int i=0 ; i<x.size() ; i++){
            cout << x[i] << " ";
        }cout << "\n";
    }
        
    vector<vector<int> > z(s2.size()+1 );
    int i =0;
    for(it = s2.begin() ; it!=s2.end() ; it++){
        z[i] = *it;
        i++;
    }

    i=0;
    int ct = 0;
    vector<int> aux;
    for(it=s1.begin(); it!=s1.end() ; it++){
        vector<int> a = *it;
        // cout << "yes" << "\n";
        if(ct<s2.size())z[i].push_back(a[0]);
        else aux.push_back(a[0]);
        i++;
        ct++;
    }

    for(int i=0 ; i<z.size()  ; i++){
        for(int j=0 ; j<z[i].size() ; j++){
            cout << z[i][j] << " ";
        }cout <<"\n";
    }

    for(int i=1 ; i<aux.size()+1 ; i++){
        cout << aux[i-1] << " ";
        if(i%3==0)cout << "\n";
    }
    
    
    return 0;
}