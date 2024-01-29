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

// n = 5
// j = 5 , 5
// j = 4 , 6
// j = 3 , 7
// j = 2 , 8
// j = 1 , 9
// j = 0 , 10

//    0 1 2 3 4 5 6 7 8 9 10
// 0            0
// 1          0 1 0
// 2        0 1 2 1 0
// 3      0 1 2 3 2 1 0
// 4    0 1 2 3 4 3 2 1 0
// 5  0 1 2 3 4 5 4 3 2 1 0
// 6    0 1 2 3 4 3 2 1 0
// 7      0 1 2 3 2 1 0
// 8        0 1 2 1 0
// 9          0 1 0
//              0

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    int start = n;
    int end = n;
    for(int i=0 ; i<n ; i++){
        int k = 1;
        for(int j=0 ; j<2*n ;j++){
            if(j==start){
                cout << "0" << " ";
            }
            else if(j==end){
                cout << "0" << " ";
            }
            else if(j>start and j<=i){
                cout << k << " ";
                k++;
            }
            else{
                cout << " ";
            }
            
        }
        start--;
        end++;
        cout << "\n";
    }

    return 0;
}