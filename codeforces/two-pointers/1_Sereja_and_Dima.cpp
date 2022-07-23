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
    rep(i,  0 , n) cin >> arr[i];
    int s = 0 , d  = 0;
    int i = 0 , j = n-1;
    while(i<j){
        if(arr[i]>=arr[j]){
            s += arr[i];
            i++;
        }
        else{
            s += arr[j];
            j--;
        }
        if(arr[i]>=arr[j]){
            d += arr[i];
            i++;
        }
        else{
            d += arr[j];
            j--;
        }
    }
    if(n%2==1){
        s += arr[i];
    }
    cout << s <<  " " <<  d << "\n";

    return 0;
}