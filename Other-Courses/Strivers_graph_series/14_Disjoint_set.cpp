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

int parent[N];
int Rank[N];

void makeSet(int n){
    for(int i=0 ; i<=n ; i++){
        parent[i] = i;
        Rank[i] = 0;
    }
}



int findPar(int node){
    if(node==parent[node]){
        return node;
    }
    return parent[node] = findPar(parent[node]);
}

void Union(int u , int v){
    u = findPar(u);
    v = findPar(v);
    if(Rank[u]<Rank[v]){
        parent[u] = v;
    }
    else if(Rank[v]<Rank[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        Rank[u]++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    makeSet(n);
    int m;
    cin >> m;
    for(int i=0 ; i<m ; i++){
        int u,v;
        cin >> u >> v;
        Union(u,v);
    }

    if(findPar(2)==findPar(8)){
        cout << "Same Component" << "\n"; 
    }
    else{
        cout << "Different Component" << "\n";
    }

    return 0;
}