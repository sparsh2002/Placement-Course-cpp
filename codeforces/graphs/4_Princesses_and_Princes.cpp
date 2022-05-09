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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> t;
        vector<vector<int> > adj(n+1 , t);
        for(int i=1 ; i<=n ; i++){
            int k;
            cin >> k;
            while(k--){
                int x;
                cin >> x;
                adj[i].push_back(x);
            }
        }

        // for(int i=1 ; i<adj.size() ; i++){
        //     cout << i << "->";
        //     for(int j=0 ; j<adj[i].size() ; j++){
        //         cout << adj[i][j] << " ";
        //     }cout << "\n";
        // }

        vector<int> female(n+1 , false);
        int ct = 0;
        vector<int> male(n+1 , false);
        for(int i=1 ; i<=n ; i++){
            for(int j=0 ; j<adj[i].size() ; j++){
                if(!male[adj[i][j]]){
                    female[i] = true;
                    male[adj[i][j]] = true;
                    ct++;
                    break;
                }
            }
        }
        if(ct==n){
            cout << "OPTIMAL" << "\n";
        }
        else{
            cout << "IMPROVE" << "\n";
            bool done = false;
            for(int i=1 ; i<=n ; i++){
                if(!female[i]){
                    
                    for(int j=1 ; j<=n ; j++){
                        if(!male[j]){
                            cout << i << " " << j << "\n";
                            done = true;
                            break;
                        }
                    }
                    if(done) break;
                }
                if(done) break;
            }
        }
    }

    return 0;
}