// author: sparsh
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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

bool static cmp(pair<ll,ll> &a , pair<ll,ll> &b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}

bool isSorted(vi &arr){
    for(int i=0 ; i<arr.size()-1 ; i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    // vi a(n);
    vl b(n);
    vector<pair<ll, ll> > arr(n);
    rep(i , 0 , n){
        ll x , y;
        cin >> x >> y;
        arr[i] = make_pair(x , y);
    }


    sort(arr.begin() , arr.end() , cmp);

    ll best = -1;
    rep(i , 0 , n){
        if(best<=arr[i].second){
            best = arr[i].second;
        }
        else{
            best = arr[i].first;
        }
    }

    cout << best << "\n";


    return 0;
}