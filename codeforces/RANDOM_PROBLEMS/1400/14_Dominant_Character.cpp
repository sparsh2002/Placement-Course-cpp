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

bool isValid(map<char,int>&mp){
    return mp['a']>mp['b'] and mp['a']>mp['c'];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
		int ans = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			vector<int> f(3, 0);
			f[s[i] - 'a']++;
			for(int j = i + 1; j < min(n, i + 7); j++)
			{
				f[s[j] - 'a']++;
				if(f[0] > f[1] && f[0] > f[2])
					ans = min(ans, j - i + 1);
			}
		}
		cout << (ans==INT_MAX ? -1 : ans) << "\n";
    }

    return 0;
}

// aaacccccaaccaaaa
// 111-1-1-1-1-1-111-1-1111