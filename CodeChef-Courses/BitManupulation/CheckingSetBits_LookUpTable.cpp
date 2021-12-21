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

void initialize(int * lookup){
    lookup[0] = 0;
    for(int i=0 ; i<256 ; i++){
        lookup[i] = lookup[i>>1] + (i&1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int lookup[256];
    initialize(lookup);

    int n;
    cin >> n;

    int count = 0;

    for(int i=0 ; i<4 ; i++){
        count += lookup[n&255];
        n = n>>8;
    }

    cout << count << "\n";

    return 0;
}