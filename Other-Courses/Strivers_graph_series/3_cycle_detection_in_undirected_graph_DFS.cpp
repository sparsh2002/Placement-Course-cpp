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

bool detectCycle(int node , int prev , vector<vector<int> > &adj , vector<bool> &vis){
    vis[node] = true;
    for(int i=0 ; i<adj[node].size() ; i++){
        if(!vis[adj[node][i]]){
            detectCycle(adj[node][i] , node , adj , vis);
        }
        else if(vis[adj[node][i]] and vis[adj[node][i]]!=prev){
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int v;
    cin >> v;

    vector<vector<int> > adj;
    vector<bool> vis(v+1 , false);

    vector<int> t;
    adj.push_back(t);

    for(int i=0 ; i<v ; i++){
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


    bool found = false;
    for(int i=1 ; i<v+1 ; i++){
        if(!vis[i]){
            if(detectCycle(i, -1 , adj , vis)){
                cout << "Yes" << "\n";
                found = true;
                break;
            }
        }
    }

    if(!found){
        cout << "No" << "\n";
    }

    return 0;
}