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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll sum = n*(n+1)/2;
    if((sum&1)==1){
        cout << "NO" << "\n";
    }
    else{
        cout << "YES" << "\n";
        if((n&1)==1){
            cout << n/2 +1 << "\n";
            int x = (n/4) + 1;
            int i = 1;
            while(x--){
                cout << i << " ";
                i++;
            }
            i = n-1;
            x = (n/4)+1;
            while(x--){
                cout << i << " ";
                i--;
            }
            cout << "\n";

            cout << n/2 << "\n";
            x = n/2 -1;
            cout << n << " ";
            while(x--){
                cout << i << " ";
                i--;
            }
            cout << "\n";
        }
        else{
            cout << n/2 << "\n";
            int x = n/4;
            int i=1;
            while(x--){
                cout << i << " ";
                i++;
            }
            x = n/4;
            i = n;
            while(x--){
                cout << i << " ";
                i--;
            }
            cout << "\n";
            cout << n/2 << "\n";
            x = n/2;
            while(x--){
                cout << i << " ";
                i--;
            }
            cout << "\n";
        }
    }

    return 0;
}