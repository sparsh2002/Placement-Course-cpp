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


int res = -1;
void lastOccurence(int * arr , int key , int low , int high){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            res = mid;
            low = mid+1;
        }
        else if(key > arr[mid]){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
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
    lastOccurence(arr , key , 0, n-1);
    cout << res << "\n";
    return 0;
}