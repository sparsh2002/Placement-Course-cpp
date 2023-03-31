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
    int n; // size of the array;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    manually

    maxx = 10;

    3 10 1 2 4

    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }

    cout << sum << "\n";

    int maxx = INT_MIN;

    for(int i=0 ; i<n ; i++){
        if(arr[i]>maxx){
            maxx = arr[i];
        }
    }

    cout << maxx << "\n";

    int minn = INT_MAX;

    for(int i=0 ; i<n ; i++){
        if(arr[i]<minn){
            minn= arr[i];
        }
    }

    cout << minn << "\n";

    
    3 10 1 2 4
    0 1  2 3 4

    int oddSum = 0 , evenSum = 0;

    for(int i=0 ; i<n ; i++){
        if(i%2==0) evenSum += arr[i];
        else oddSum += arr[i];
    }

    cout << oddSum << " " << evenSum << "\n";

    int maxx = *max_element(arr , arr+2);
    int minn = *min_element(arr , arr+2);

    cout << maxx << " " << minn << "\n";

    int sum  = 0;
    sum = accumulate(arr , arr+n , sum);

    cout << sum << "\n";


    return 0;
}