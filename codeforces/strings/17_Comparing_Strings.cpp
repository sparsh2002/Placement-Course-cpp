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
    string a  , b;
    cin >> a >> b;
    map<char , int> mp;
    rep(i , 0 , a.size()){
        mp[a[i]]++;
    }
    rep(i , 0 , b.size()){
        mp[b[i]]++;
    }

    map<char,int>::iterator it;
    bool ans = true;
    for(it=mp.begin() ; it!=mp.end() ; it++){
        if(it->second%2==1){
            ans  = false;
            break;
        }
    }

    if(ans){
        cout << "YES" << "\n";
    }

    else{
        cout << "NO" << "\n";
    }

    return 0;
}