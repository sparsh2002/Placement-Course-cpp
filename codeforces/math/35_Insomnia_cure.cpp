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
    
    
        int k,l,m,n,d;
        cin >> k >> l >> m >> n >> d;
        vector<bool> mark(d , false);
        for(int i=k-1 ; i<d ; i = i+k){
            mark[i] = true;
        }
        for(int i=l-1 ; i<d ; i = i+l){
            mark[i] = true;
        }
        for(int i=m-1 ; i<d ; i = i+m){
            mark[i] = true;
        }
        for(int i=n-1 ; i<d ; i = i+n){
            mark[i] = true;
        }

        int ct = 0;

        for(int i=0 ; i<d ; i++){
            if(mark[i]){
                ct++;
            }
        }

        cout << ct << "\n";
    

    return 0;
}