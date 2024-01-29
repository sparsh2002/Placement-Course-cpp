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
    map<int, int> mp;
//  map<key , value> map_name;  
    int arr[10] = {1 , 3, 1, 1, 3, 2, 4, 5, 6, 6};
    double arr2[10] = {1.0 , 3.1, 1.2, 1.4, 3.4, 2.0, 4.56, 5.66, 6.00, 6.53445235};
    int n = 10;

    // 1 , 3
    // 3 , 2
    // 2 , 1
    // 4 , 1
    // 5 , 1
    // 6 , 2

    // for(auto x:arr2){
    //     cout << x << " ";
    // }

    // for(int x:arr){
    //     cout << x << " ";
    // }

    for(int i=0 ; i<n ; i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout << it.first << " " << it.second << "\n";
    }

    // cout << "\n";

    // cout << mp[1] << "\n";

    // map<int,int>::iterator it;

    for(map<int,int>::iterator it = mp.begin() ; it!=mp.end() ; it++){
        cout << it->first << " " << it->second << "\n";
    }

    if(mp.find(10)!=mp.end()){ // nlogn
        cout << "Exist" << "\n";
    }
    else{
        cout << "Not exist" << "\n";
    }
    int x = mp.size();

    cout << x << "\n";
    

    

    return 0;
}