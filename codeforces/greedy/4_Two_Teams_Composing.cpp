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
int n;
vi arr;
map<int,int> mp;
bool good(int x){
    map<int,int>::iterator it;
    int extra = 0;
    int maxx = 1;
    for(it = mp.begin() ; it!=mp.end() ; it++){
        maxx = max(maxx , it->second);
    }
    if(maxx<x) return false;
    extra = (maxx-x > 0 ? 1 :0);
    return (mp.size()-1 + extra) >=x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        mp.clear();
        cin >> n;
        arr.resize(n);
        rep(i ,0 , n) cin >> arr[i];
        if(n==1) cout << 0 << "\n";
        else{
            rep(i , 0 , n) mp[arr[i]]++;
            int l = 1 , r = n;
            int ans = 1;
            while(l<=r){
                int m = (l+r)/2;
                if(good(m)){
                    ans = m;
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }

            cout << ans << "\n";
        }
        
    }

    return 0;
}