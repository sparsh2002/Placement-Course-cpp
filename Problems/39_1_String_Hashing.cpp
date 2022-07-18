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
#define sort_v(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int p = 2;
vl powers(N);


ll calculateHash(string s){
    ll hash = 0;
    rep(i , 0 , s.size()){
        hash += ((s[i]-'a'+1)*powers[i])%MOD;
    }
    return hash;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    powers[0] = 1;
    rep(i, 1 , N){
        powers[i] = (powers[i-1]*p)%MOD;
    }
    int n;
    cin >> n;
    vector<string> arr(n);
    rep( i, 0, n) cin >> arr[i];
    vl hashes;
    rep(i , 0, n){
        hashes.push_back(calculateHash(arr[i]));
    }

    sort_v(hashes);

    int distinct = 0;
    rep(i , 0, n){
        if(i==0 or hashes[i]!=hashes[i-1]) distinct++;
    }

    cout << distinct << "\n";

    return 0;
}