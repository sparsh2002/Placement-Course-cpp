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

void findTwoMissing(vector<int> arr , int n){
    int xorSum = 0;
    for(int i=0 ; i<n ; i++){
        xorSum = xorSum^arr[i];
    }

    int setBit = xorSum&(~(xorSum-1));
    int n1=0 , n2=0;
    for(int i=0 ; i<n ; i++){
        if((setBit&arr[i])==0){
            n1 = n1^arr[i];
        }
        else{
            n2 = n2^arr[i];
        }
    }
    
    cout <<  n1 << " " << n2 << "\n";
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

    findTwoMissing(arr, n);
    return 0;
}