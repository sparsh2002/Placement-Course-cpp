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
vector<int> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
	cin >> n >> m;
	a.assign(n+1, -1);
	rep(i , 0 , m){
		int x, y, z;
		cin >> x >> y >> z;
		if (a[x] < 0 && a[y] < 0 && a[z] < 0) {
			a[x] = 0;
			a[y] = 1;
			a[z] = 2;
		}
		else if (a[x] >= 0) {
			a[y] = (a[x] + 1) % 3;
			a[z] = (a[x] + 2) % 3;
		}
		else if (a[y] >= 0) {
			a[z] = (a[y] + 1) % 3;
			a[x] = (a[y] + 2) % 3;
		}
		else {
			a[x] = (a[z] + 1) % 3;
			a[y] = (a[z] + 2) % 3;
		}
	}
	rep(i , 1 , n+1){
        cout << a[i]+1 << " ";
    }



    return 0;
}