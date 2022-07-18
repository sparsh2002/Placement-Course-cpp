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


int fen[N];

void update(int i , int add){
    while(i<N){
        fen[i] += add;
        i += (i&(-i));
    }
}

int sum(int i){
    int s = 0;
    while(i>0){
        s += fen[i];
        i = i - (i&(-i));
    }

    return s;
}

int rangeSum(int l , int r){
    return sum(r)-sum(l-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vi arr(n);
    rep(i , 0 , n) cin >> arr[i];
    rep(i , 1 , n+1) update(i , arr[i-1]);

    rep(i , 0 , q){
        int t;
        cin >> t;
        
    }
    return 0;
}