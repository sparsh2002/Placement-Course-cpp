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
    int n;
    unsigned long long k;
    cin >> n >> k;
    vl arr(n);
    rep(i , 0 , n) cin >> arr[i];

    int i=0  , j=0;
    unsigned long long sum = 0;
    int minn = n+1;

    while(j<n){
        if(sum+arr[j]<k){
            sum += arr[j];
            j++;
        }
        else if(sum+arr[j]>=k){
            sum += arr[j];
            minn = min(minn , j-i+1);
            while(i<=j and sum>=k){
                sum -= arr[i];
                minn = min(minn , j-i+1);
                i++;
            }
            j++;
        }
    }
    if(minn == n+1) cout << -1;
    else cout <<  minn;
    return 0;
}