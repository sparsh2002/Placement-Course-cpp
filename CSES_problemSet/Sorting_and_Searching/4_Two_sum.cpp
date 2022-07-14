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
#define sort(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

ll n, x;
vl arr;
map<int,int> mp;
vector<int> solve(){
    vector<int> ans;
    rep(i , 0, n) mp[arr[i]] = i;
    rep(i , 0, n){
        if(mp.find(x-arr[i])!=mp.end()){
            if(i+1 != mp[x-arr[i]]+1){
                ans.push_back(i+1);
                ans.push_back(mp[x-arr[i]]+1);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x;
    arr.resize(n);
    rep(i , 0 ,n) cin >> arr[i];
    mp.clear();
    
    vector<int> ans = solve();

    if(ans.size()==0){
        cout << "IMPOSSIBLE" << "\n";
    }
    else{
        cout << ans[0] <<  " " << ans[1] << "\n";
    }
    return 0;
}