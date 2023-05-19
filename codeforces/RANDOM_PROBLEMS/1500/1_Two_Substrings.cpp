// author: sparsh
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >>s ;
    int n = s.size();
    vi a;
    vi b;
    rep(i, 0 ,n-1){
        if(s[i]=='A' and s[i+1]=='B'){
            a.push_back(i);
        }
        if(s[i]=='B' and s[i+1]=='A'){
            b.push_back(i);
        }
    }


    rep(i, 0, a.size()){
        int start = a[i];
        int end = start+1;
        rep(j , 0 , b.size()){
            if(b[j]>end){
                cout << "YES" << "\n";
                return 0;
            }
            if(b[j]+1<start){
                cout << "YES" << "\n";
                return 0;
            }
            
        }
    }

    cout << "NO" << "\n";

    return 0;
}