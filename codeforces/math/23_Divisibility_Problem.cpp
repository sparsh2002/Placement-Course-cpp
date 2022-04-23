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
        ll a,b;
        cin >> a >> b;
        if(a%b==0){
            cout << 0 << "\n";
        }
        else if(a>b){
            if(a>b-(a%b)){
                cout << b-(a%b) << "\n";
            }
            else{
                cout << a%b << "\n";
            }
        }
        else{
            cout << b-a << "\n";
        }
    }

    return 0;
}