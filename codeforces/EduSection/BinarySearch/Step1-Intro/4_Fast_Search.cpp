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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi arr(n);
    rep(i , 0 , n) cin >> arr[i];
    sort(arr.begin() , arr.end());
    int k;
    cin >> k;
    int l , r;
    rep(i , 0, k){
        cin >> l  >> r;
        int i1 = std::lower_bound(arr.begin() , arr.end() , l) - arr.begin();
        int i2 = std::upper_bound(arr.begin() , arr.end() , r) - arr.begin();
        cout << abs(i1-i2) << " ";
    }

    return 0;
}