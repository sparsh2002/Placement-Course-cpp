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

int lower_bound(vl  &arr , int x){
    int low = 0 , high = arr.size()-1;
    int res = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(x<=arr[mid]){
            res = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    
    if(res==-1) return arr.size()+1;
    return res+1;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vl arr(n);
    rep(i , 0 , n) cin >> arr[i];
    rep(i , 0 , k){
        int x ;
        cin >> x;
        cout << lower_bound(arr , x) << "\n";
        // std::vector<long long> ::iterator low;
        // low = std::lower_bound(arr.begin() , arr.end() , x);
        // if(low==arr.end()){
        //     cout << n+1 << "\n";
        // }
        // else{
        //     cout << low-arr.begin()+1 << "\n";
        // }
    }
    return 0;
}