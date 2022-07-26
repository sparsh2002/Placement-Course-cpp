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
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

long long arr[105];
bool cmp(int a, int b){
	return a > b;
}
int main(){
	int t;
	int n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		} 
		sort(arr, arr + n, cmp);
		long long sum = 0;
		for(int i = k; i < 2 * k; i++){
			if(arr[i] == arr[i - k]){
				sum += 1;
			}else{
				sum += 0;
			}
		}
		for(int i = 2 * k; i < n; i++){
			sum += arr[i];
		}
		cout << sum << endl;
	}
	return 0;
}
