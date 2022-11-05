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
    cin >> s;

    int ct4 = 0;
    int ct7 = 0;

    int n = s.size();

    for(int i=0 ; i<n ; i++){
        if(s[i]=='4'){
            ct4++;
        }
        if(s[i]=='7'){
            ct7++;
        }
    }

    if(ct4==0 and ct7==0){
        cout << -1 << "\n";
    }
    else if(ct4!=0 and ct7!=0){
        if(ct4>=ct7){
            cout << 4<< "\n";
        }
       else{
        cout << 7 << "\n";
       }
    }
    else if(ct4!=0){
        cout << 4 << "\n";
    }
    else{
        cout << 7 << "\n";
    }

    return 0;
}