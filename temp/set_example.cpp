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
    int arr[10] = {1 , 3, 1, 1, 3, 2, 4, 5, 6, 6}; // O(n)
    int n = 10;

    set<int> st;

    for(int i=0 ; i<n ; i++){
        st.insert(arr[i]);
    }

    set<int>::iterator it;

    for(it = st.begin() ; it!=st.end() ; it++){
        cout << *it << " ";
    }

    // if(st.find(10)!=st.end() ){
    //     cout << "found" << "\n";
    // }
    // else{
    //     cout << "not found" << "\n";
    // }

    // 1 2 3 4 5 6

    // 1 2 4 5 6 7
    
    // auto it = st.lower_bound(3);
    // auto jt = st.upper_bound(3);

    


    

    return 0;
}