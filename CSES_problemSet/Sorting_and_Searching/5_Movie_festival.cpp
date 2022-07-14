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

bool cmp(pair<ll,ll> &a , pair<ll,ll> &b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<ll,ll> > arr(n);
    rep(i,0,n){
        ll s , e;
        cin >> s >> e;
        arr[i] = make_pair(s , e);
    }

    sort(arr.begin() , arr.end() , cmp);

    int ct = 1;
    ll end = arr[0].second;
    rep(i ,1 , n){
        if(arr[i].first>=end){
            end = arr[i].second;
            ct++;
        }
    }

    cout << ct << "\n";
    return 0;
}