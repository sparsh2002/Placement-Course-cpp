#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;


bool isValid(vi &arr){
    int n = arr.size();
    if(n==1) return true;

    int diff = arr[1]-arr[0];
    rep(i, 1 , n){
        if(arr[i]-arr[i-1]!=diff) return false;
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi arr(n);
    read(arr , n);

    map<int,vi> mp;

    rep(i, 0 , n){
        mp[arr[i]].push_back(i);
    }
    
    vii ans;
    
    for(auto it:mp){
        if(isValid(it.second)){
            if(it.second.size()==1){
                ans.push_back({it.first , 0});
            }
            else{
                ans.push_back({it.first , it.second[1]-it.second[0]});
            }
        }
    }
    
    cout << ans.size() << "\n";
    
    rep(i , 0 , ans.size()){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }

    return 0;
}