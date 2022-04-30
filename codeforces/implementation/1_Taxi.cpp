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

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    vector<int> cnt(5,0);
    for(int i=0 ; i<n ; i++){
        cnt[arr[i]]++;
    }
    int ans =0;
    ans += cnt[4];
    
    ans += cnt[3];
    cnt[1] -= min(cnt[1], cnt[3]);
 
    ans += (cnt[2] + 1) / 2;
    cnt[2] %= 2;
    cnt[1] -= min(cnt[1], 2 * cnt[2]);
 
    ans += (cnt[1] + 3) / 4;
    cout << ans << "\n";
    return 0;
}