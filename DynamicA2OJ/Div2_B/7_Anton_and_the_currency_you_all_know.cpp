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

string change(string s , int i){
    int n  = s.size();
    char a = s[i];
    char b = s[n-1];

    s[i] = b;
    s[n-1] = a;
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;

    vector<int> v;

    int n = s.size();

    int idx = -1;
    // int minn  = s[n-1]-'0';


    for(int i=n-1; i>=0 ; i--){
        if((s[i]-'0')%2==0){
            if(idx==-1){
                // cout << "uper" << "\n";
                idx = i;
                // if((s[i]-'0')<minn)minn = s[i]-'0';
            }
            else if(s[i]<s[n-1]){
                // cout << "neeche" << "\n";
                idx = i;
                // minn = s[i]-'0';
            }
        }
    }

    if(idx==-1){
        cout << -1 << "\n";
    }
    else{
        cout << change(s , idx) << "\n";
    }

    return 0;
}