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

int binarySearch(int * arr , int n , int key , int low , int high){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int findIndex(int * arr , int n){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(arr[mid]<=arr[next] and arr[mid]<=arr[prev]){
            return mid;
        }
        else if(arr[mid]<=high){
            high = mid+1;
        }
        else{
            low = mid-1;
        }
    }
    return -1;
}

int findElement(int * arr , int n , int key  , int index){
    int ans1 = binarySearch(arr , n ,key  , 0,index-1);
    int ans2 = binarySearch(arr , n ,key  , index,n-1);
    if(ans1!=-1){
        return ans1;
    }
    else if (ans2!=-1){
        return ans2;
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
    int index = findIndex(arr , n);
    int ans = findElement(arr , n , key , index);
    cout <<  ans << "\n";
    return 0;
}