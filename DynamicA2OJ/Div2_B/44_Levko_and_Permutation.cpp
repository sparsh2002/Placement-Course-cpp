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


int gcd(int a , int b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;

    if(n==k){
        cout << -1 << "\n";
    }
    else{
        if(n-1==k){
            rep(i , 1 , n+1) cout << i << " ";
            return 0;
        }
        if(k==0){
            cout << n << " ";
            rep(i , 1 , n)cout << i << " ";
            return 0;
        }
        if(gcd(2+k , n)>1){
           cout << "2 1 ";

           rep(i , 3 , 2+k) cout << i << " ";
           rep(i , 3+k , n+1) cout << i << " ";

           cout << 2+k << " ";
        }
        else{
            cout << 1 << " ";
            rep(i , 2 , 2+k) cout << i << " ";
            rep(i , 3+k , n+1) cout << i << " ";
            cout << 2+k ;
        }
    }

    return 0;
}