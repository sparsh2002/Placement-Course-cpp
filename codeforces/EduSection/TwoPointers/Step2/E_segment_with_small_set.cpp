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
    int n , k;
    cin >> n >> k;
    vi arr(n);
    rep(i , 0 , n) cin >> arr[i];
    map<int,int> mp;
    int i=0 , j = 0;
    long long ct = 0;
    while(j<n){
        mp[arr[j]]++;
        if(mp.size()<=k){
            ct += j-i+1;
            j++;
        }
        else if(mp.size()>k){
            while(i<j and mp.size()>k){
                mp[arr[i]]--;
                if(mp[arr[i]]==0) mp.erase(arr[i]);
                i++;
            }
            if(mp.size()<=k){
                ct += j-i+1;
            }
            j++;
        }
    }

    cout << ct << "\n";
    return 0;
}