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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vl arr(n);
    rep(i , 0, n) cin  >> arr[i];
    vl prefix(n+1);
    prefix[0] = arr[0];
    rep(i , 1 , n){
        prefix[i] = arr[i]^prefix[i-1];
    }
    rep(i , 0, q){
        int a , b;
        cin >> a >> b;
        a--; // zero based indexing
        b--; // zero based indexing
        ll first = prefix[b];
        ll second = 0;
        if(a>0) second = prefix[a-1];
        cout << (first xor second) << "\n";
    }

    return 0;
}