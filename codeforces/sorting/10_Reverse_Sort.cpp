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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        if(is_sorted(s.begin(), s.end()))
        {
            cout << 0 << "\n";
            continue;
        }
        
        string t = s;
        sort(t.begin(), t.end());
        cout << 1 << "\n";
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
                ans.push_back(i+1);
        }
        cout << ans.size() << " ";
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " \n"[i+1 == ans.size()];
            
    }

    return 0;
}