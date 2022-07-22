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
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());

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
    int sum = 0;
    vii v(n);
    rep(i , 0 , n){
        v[i].first = arr[i];
        v[i].second = i;
    }
    sort_vr(v);
    vector<int> ans;
    for(int i=0 ; i <n ; i++){
        sum += i*v[i].first +1;
        ans.push_back(v[i].second+1);
    }

    cout << sum << "\n";
    rep(i ,0 , n) cout <<  ans[i] << " ";
    cout << "\n";
    return 0;
}