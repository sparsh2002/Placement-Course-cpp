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
    double a , b, c, d;
    cin >> a >> b >> c >> d;

    if((a/b)<(c/d)){
        int N = b*c-a*d ;
        int D = b*c;

        int g = gcd(N , D);
        if(g>1){
            N = N/g;
            D = D/g;
        }

        cout << N << "/" << D <<"\n";
    }
    else if((a/b)>(c/d)){
        int N = a*d - b*c ;
        int D = a*d;

        int g = gcd(N , D);
        if(g>1){
            N = N/g;
            D = D/g;
        }

        cout << N << "/" << D <<"\n";
    }
    else{
        cout << 0 << "/" << 1 <<"\n";
    }

    return 0;
}