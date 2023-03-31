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

// [5 , 1 , 0 , 0 , 0,0, 0,  0]

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> arr;

    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(3);
    arr.pop_back();

    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << "\n";
    }
    int n = 5;
    vector<int> arr(n);

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    arr.push_back(10);

    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << " ";
    }

    arr.resize(10);

    int minn = *min_element(arr.begin() , arr.end());
    int maxx = *max_element(arr.begin() , arr.end());
    int sum = 0;
    sum = accumulate(arr.begin() , arr.end() , sum);

    cout << minn << " " << maxx << " " << sum <<  "\n";

    arr.erase(arr.begin()+2);

    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << " ";
    }


    return 0;
}