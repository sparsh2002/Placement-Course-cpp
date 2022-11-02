#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define sort_v(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , s ,t;
    cin >>  n >> s >> t;
    s--; // to convert the base to 0-index array
    t--;  // to convert the base to 0-index array
    vi arr(n);
    rep(i , 0 , n){
        int x;
        cin >> x;
        x--;
        arr[i] = x;
    }

    if(s==t){
        cout << 0 << "\n";
        return 0;
    }

    vector<int> temp;
    
    vector<vector<int> > adj(n , temp);

    for(int i=0 ; i<n;  i++){
        adj[i].push_back(arr[i]);
    }

    
    
    vector<int> vis(n , 0);
    
    
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    int steps = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(node==t){
            cout << steps << "\n";
            return 0;
        }

        for(int j=0 ; j<adj[node].size() ; j++){
            if(!vis[adj[node][j]]){
                q.push(adj[node][j]);
                vis[adj[node][j]] = 1;
            }
        }
        steps++;
    }


    cout << -1 << "\n";

    return 0;
}