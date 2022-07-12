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
        int n;
        cin >> n;
        vl arr(n);
        rep(i, 0, n) cin >> arr[i];
        priority_queue<ll> q;
        ll ans = 0;
        int t = 0;
        rep(i, 0, n){
            q.push(arr[i]);
        }
        while(!q.empty()){
            ll top = q.top();
            q.pop();
            if(top>t){
                 top = top-t;
            }
            else{
                top = 0;
            }
            t++;
            ans = (ans + top)%MOD;
        }
        cout << ans%MOD << "\n";
    }

    return 0;
}