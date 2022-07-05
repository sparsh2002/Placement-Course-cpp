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
    int maxx= 1;
    string s;
    cin >> s;
    int n = s.size();
    char curr = s[0];
    int ct = 1;
    for(int i=1 ; i<n ; i++){
        if(s[i]==curr){
            ct++;
        }
        else{
            curr = s[i];
            maxx = max(maxx, ct);
            ct = 1;
        }
    }
    maxx = max(maxx , ct);
    cout << maxx << "\n";

    return 0;
}