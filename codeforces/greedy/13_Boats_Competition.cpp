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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi arr(n);
        rep(i , 0 , n) cin >> arr[i];
        int maxx = 0;
        int maxel = max_el(arr);
        rep(s , 0 , 2*maxel+1){
            int ct = 0;
            vector<bool> vis(n , false);
            rep(i , 0 , n){
                rep(j , 0 , n){
                    if(arr[i]+arr[j]==s and !vis[i] and !vis[j] and i!=j){
                        vis[i] = true;
                        vis[j] = true;
                        ct++;
                    }
                }
            }
            maxx = max(maxx , ct);
        }

        cout << maxx << "\n";
    }

    return 0;
}