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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int euler_totient(int n){
    int res = n;
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            res /= i;
            res *= (i-1);

            while(n%i==0){
                n /= i;
            }
        }
    }
    if(n>1){
        res /=n , res *=(n-1);
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << euler_totient(n) << "\n";

    return 0;
}