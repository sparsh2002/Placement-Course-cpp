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

int peakElement(int * arr , int n){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid>0 and mid<n-1){
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid-1]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else if(mid==0){
            if(arr[0]>arr[1]){
                return 0;
            }
            return 1;
        }
        else{
            if(arr[n-1]>arr[n-2]){
                return n-1;
            }
            return n-2;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int ans = peakElement(arr , n);
    cout << ans << "\n";
    return 0;
}