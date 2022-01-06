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

int KthLargest(vector<int> arr , int k){
    priority_queue<int,vector<int> , greater<int> > minh;
    for(int i=0 ; i<arr.size() ; i++){
        minh.push(arr[i]);
        if(minh.size()>k){
            minh.pop();
        }
    }
    return minh.top();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << KthLargest(arr , k) << "\n";

    return 0;
}