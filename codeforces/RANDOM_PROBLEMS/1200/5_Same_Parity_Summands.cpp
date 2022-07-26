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
    int t;
    cin >> t;
    while(t--){
        int n , k ;
        cin >> n >> k;
        int oddRem = n - (k-1);
        int evenRem = n - 2*(k-1);
        int oddUsed = k-1;
        int evenUsed = 2*(k-1);
        if(oddRem>0 and (oddRem%2==1)){
            cout << "YES" << "\n";
            rep(i , 0 , k-1) cout << 1 << " ";
            cout << oddRem << "\n";
        }
        else if(evenRem>0 and (evenRem%2==0)){
            cout << "YES" << "\n";
            rep(i , 0 , k-1) cout << 2 << " ";
            cout << evenRem << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
        
    }

    return 0;
}