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
    string a , b;
    cin >> a >> b;

    map<char,int> mp1;
    map<char,int> mp2;

    int n = a.size();
    int m = b.size();

    rep(i,  0 , n) mp1[a[i]]++;
    rep(i , 0 , m) mp2[b[i]]++;

    bool possible = true;
    int ct  =0;
    map<char,int>::iterator it;

    for(it=mp2.begin(); it!=mp2.end() ; it++){
        char color = it->first;
        if(mp1.find(color)==mp1.end()){
            possible = false;
            break;
        }

        int f1 = it->second;
        int f2 = mp1[color];
        if(f2>=f1){
            ct += f1;
        }
        else{
            ct += f2;
        }
    }

    if(possible){
        cout << ct << "\n";
    }
    else{
        cout << -1 << "\n";
    }

    return 0;
}