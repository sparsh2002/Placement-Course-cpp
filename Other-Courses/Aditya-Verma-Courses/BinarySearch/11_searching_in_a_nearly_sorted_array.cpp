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

int nearlySortedSearch(int * arr , int n , int key){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if((mid-1)>=low and arr[mid-1]==key){
            return mid-1;
        }
        else if((mid+1)<=high  and arr[mid+1]==key){
            return mid+1;
        }
        else if(key<=arr[mid]){
            low = mid-2;
        }
        else{
            high = mid+2;
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
    int key;
    cin >> key;
    int ans = nearlySortedSearch(arr , n , key);
    cout << ans << "\n";
    return 0;
}