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
    int n , k;
    cin >> n >> k;
    vector<string> arr(n);
    rep(i, 0 , n){
        cin >> arr[i];
    }
    string password;
    cin >> password;
    map<int,int> mp;
    map<int,int>::iterator jt;
    int countForBest = 0;
    int countForWorst = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i].size()<password.size()){
            countForBest++;
            countForWorst++;
        }
        if(arr[i].size()==password.size()){
            countForWorst++;
        }
    }
    int bestcase = 0 , worstcase = 0;
   
    bestcase = countForBest + (countForBest/k)*5 + 1;
    worstcase = countForWorst  + ((countForWorst-1)/k)*5;

    cout << bestcase << " " <<  worstcase <<  "\n";
    
    return 0;
}