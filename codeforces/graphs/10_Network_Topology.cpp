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
    vector<vector<int> > adj(n+1 ,t);
    for(int i=0 ; i<m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    

    int d1 = 0;
    int d2 = 0;
    int other = 0;

    for(int i=1 ; i<=n ; i++){
        if(adj[i].size()==1) d1++;
        else if(adj[i].size()==2)  d2++;
        else other++;
    }
    
    if(d2==n-2 and d1==2) {
        cout << "bus topology" << "\n";
    }
    else if(d2==n){
        cout << "ring topology" << "\n";
    }
    else if(d1==n-1 and other==1){
        cout << "star topology" << "\n";
    }
    else{
        cout << "unknown topology" << "\n";
    }
    return 0;
}