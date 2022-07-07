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

int upper_bound(vl  &arr , int x){
    int low = 0 , high = arr.size()-1;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){
            low = mid+1;
        }
        else if(x<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    return low;
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
        cout << upper_bound(arr , x) << "\n";
    }
    return 0;
}