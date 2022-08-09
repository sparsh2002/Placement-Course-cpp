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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n , t;
    cin >> n >> t;
    vl arr(n);
    read(arr , n);


    ll sum = 0;
    sum = accumulate(arr.begin() , arr.end() , sum);
    if(sum<=t){
        cout << n << "\n";
        return 0;
    }
    vl prefix(n , 0);
    prefix[0] = arr[0];

    rep(i , 1 , n){
        prefix[i] = prefix[i-1] + arr[i];
    }

    // prefix.insert(prefix.begin() , 0);
    int maxx = 0;

    // rep(i , 0 , n) cout << prefix[i] << " ";
    // cout << "\n";
    int i=0 , j=0;
    while(j<n){
        j++;
        if(j<n and prefix[j]-prefix[i]<=t){
            // cout << prefix[i] << " " << prefix[j] << "\n";
            maxx = max(maxx , j-i);
        }
        else if(j<n and prefix[j]-prefix[i]>t){
            while(i<n and i<=j and prefix[j]-prefix[i]>t){
                // cout << prefix[i] << " " << prefix[j] << "\n";
                i++;
            }
            if(prefix[j]-prefix[i]<=t){
                // cout << prefix[i] << " " << prefix[j] << "\n";
                maxx = max(maxx , j-i);
            }
        }
    }

    cout << maxx << "\n";
    return 0;
}