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

ll changeDigit(ll n , int j , int i){
    string s = to_string(n);
    int x = s.size();
    if(x-1-i<0){
        s += "9";
    }
    else{
        s[x-1-i] = (j+'0');
    }
    
    return stoll(s);
}

int getDigit(ll n , int i){
    string s = to_string(n);
    // cout << i << "\n";
    // if(i==s.size()) return 9;
    return s[s.size()-1-i]-'0';
}

int countDigits(ll n){
    return to_string(n).size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll p , d;
    cin >> p >> d;
    ll n = p-d;
    cout << n << "\n\n";
    int i =0;
    int digits = countDigits(p);
    while(n<=p and i<=digits){
        rep(j , getDigit(n , i) , 10){
            ll now = changeDigit(n , j , i);
            cout << now << "\n";
            if(now>p){
                cout << n;
                return 0;
            }
            n = now;
        }
        i++;
    }

    cout << n;

    return 0;
}