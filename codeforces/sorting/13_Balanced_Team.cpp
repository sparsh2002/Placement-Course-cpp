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
    sort_v(arr);
    int maxx = 1;
    int i=0 , j=0;
    while(j<n){
        int curr = arr[i];
        while(j<n and arr[j]-curr<=5){
            j++;
        }
        maxx = max(maxx , j-i);
        curr =  arr[j];
        while(i<=j and curr-arr[i]>5){
            i++;
        }
        
    }

    cout << maxx << "\n";

    return 0;
}