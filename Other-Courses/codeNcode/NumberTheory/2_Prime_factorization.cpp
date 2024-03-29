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
int MOD = 1000000007;



void primeFactor(int n){
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            int ct = 0;
            while(n%i==0){
                ct++;
                n = n/i;
            }
            cout << i << "^" << ct << "\n";
        }
    }
    if(n>1){
        cout << n << "^" << 1 << "\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    primeFactor(n);

    return 0;
}