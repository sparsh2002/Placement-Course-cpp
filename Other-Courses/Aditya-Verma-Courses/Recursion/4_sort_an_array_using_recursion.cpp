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

void insert(vector<int> &arr , int temp){
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }

    int val = arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);
}

void sort(vector<int> &arr){
    if(arr.size()==1){
        return;
    }
    int temp = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);
    insert(arr , temp);
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
    sort(arr);
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}