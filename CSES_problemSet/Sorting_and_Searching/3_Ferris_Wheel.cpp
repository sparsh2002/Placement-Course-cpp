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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)
#define sort(arr) sort(arr.begin() , arr.end());
#define max(arr) *max_element(arr.begin() , arr.end());
#define min(arr) *min_element(arr.begin() , arr.end());


long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,x;
    cin >> n >> x;
    vl arr(n);
    rep(i , 0 , n) cin >> arr[i];
    sort(arr);
    int i = 0 , j=n-1;
    int ct = 0;
    while(i<j){
        if(arr[i]+arr[j]<=x){
            i++;
            j--;
        }
        else{
            j--;
        }
        ct++;
    }
    ct += j-i+1;
    cout << ct << "\n";
    return 0;
}