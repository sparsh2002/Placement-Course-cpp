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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >>  n >> m;
    multiset<int> ticket;
    rep(i , 0 , n){
        int x;
        cin >> x;
        ticket.insert(x);
    }
    vi cus(m);

    rep(i , 0 , m) cin >> cus[i];

    multiset<int>::iterator it;
    rep(i , 0, m){
        int x = cus[i];
        it = ticket.lower_bound(x);
        it = ticket.upper_bound(x);
		if (it==ticket.begin()){
			cout << -1 << "\n";
		}
		else{
			cout << *(--it) << "\n";
			ticket.erase(it);
		}
    }

    return 0;
}