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
    int n;
    cin >> n;
    vi arr(n);
    read(arr , n);
    int m;
    cin >> m;
    vl arr1(n+1);
    arr1[0] = arr[0];
    rep(i , 0 , n){
        arr1[i+1] = arr[i] + arr1[i];
    }
    sort_v(arr);
    vl arr2(n+1);
    rep(i , 0 , n){
        arr2[i+1] = arr[i] + arr2[i];
    }
    rep(i , 0 , m){
        int t , l , r;
        cin >> t >> l >> r;
        if(t==1){
            cout << arr1[r] - arr1[l-1] << "\n";
        }
        else{
            cout << arr2[r] - arr2[l-1] << "\n";
        }
    }

    return 0;
}