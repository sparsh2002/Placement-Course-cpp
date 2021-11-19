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
double PI = acos(-1);



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vvi adjm(n+1 , vi(n+1,0));
    rep(i,0,m){
        int x,y;
        cin >> x >> y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    rep(i,1,n+1){
        rep(j,1,m+1){
            cout << adjm[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}