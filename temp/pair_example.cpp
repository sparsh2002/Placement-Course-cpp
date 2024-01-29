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
    // pair<int,int> mypair;
    // mypair.first = 1;
    // mypair.second = 10;
    // pair<int,int> mypair = make_pair(2 , 4);


    // cout << mypair.first << " " << mypair.second << "\n";

    vector<pair<int,int> > arr;

    arr.push_back(make_pair(2 , 3));
    arr.push_back(make_pair(4 , 5));
    arr.push_back(make_pair(5 , 1));
    arr.push_back(make_pair(6 , 10));

    int n = arr.size();

    for(int i=0 ; i<n ; i++){
        // pair<int,int> mypair = arr[i];
        // cout << mypair.first << " " << mypair.second << "\n";
        cout << arr[i].first << " " << arr[i].second << "\n";
    }



    return 0;
}