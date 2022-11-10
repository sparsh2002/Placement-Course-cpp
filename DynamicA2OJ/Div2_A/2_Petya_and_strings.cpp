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

string to_lower(string a){
    string ans ="";
    int n = a.size();
    rep(i ,0 , n){
        ans += tolower(a[i]);
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a ,b;

    cin >> a >> b;

    if(to_lower(a)==to_lower(b)){
        cout << 0 << "\n";
    }
    else if(to_lower(a)>to_lower(b)){
        cout << 1 << "\n";
    }   
    else{
        cout << -1 << "\n";
    }

    return 0;
}