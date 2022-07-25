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
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' ';

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n , k , x;
    cin >> n >> k >> x;
    vl arr(n);
    read(arr , n);
    sort_v(arr);
    int ct = 1;
    priority_queue<ll , vector<ll> , greater<ll> > q;
    rep(i , 1 , n){
        if(arr[i]-arr[i-1]>x){
            ct++;
            q.push(arr[i]-arr[i-1]);
        }
    }

    while(k>0 and !q.empty()){
        ll top = q.top();
        q.pop();
        ll req = top/x -1;
        if(top%x!=0) req++;
        if(req>k){
            break;
        }
        else{
            k -= req;
            ct--;
        }
    }

    cout << ct << "\n";
    return 0;
}