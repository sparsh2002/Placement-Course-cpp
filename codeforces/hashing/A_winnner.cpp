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

const int MAXN = 1024;
 
char name[MAXN][44];
int score[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
	map<string, int> mp;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s %d", name[i], score + i);
		mp[name[i]] += score[i];
	}
	int bestscore = -10000000;
	for (map<string, int>::iterator mi = mp.begin(); mi != mp.end(); ++mi) {
		if (mi->second > bestscore) {
			bestscore = mi->second;
		}
	}
	map<string, int> mp2;
	for (int i = 0; i < n; ++i) {
		mp2[name[i]] += score[i];
		if (mp[name[i]] == bestscore && mp2[name[i]] >= bestscore) {
			cout << name[i] << "\n";
			break;
		}
	}
    return 0;
}