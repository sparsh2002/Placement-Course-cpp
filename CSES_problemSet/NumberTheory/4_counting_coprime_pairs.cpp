#include<bits/stdc++.h>
#include <numeric>
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
int gcd(int a , int b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}


void solve(int n , vector<int>&arr){
    vector<bool> is_prime(n+1, true);
    is_prime[0]  = false;
    is_prime[1]  = true;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    int ct = 0;
    for(int i=0 ; i<arr.size() ; i++){
        if(is_prime[arr[i]])ct++;
    }
    int x = arr.size();
    // cout << ct << "\n";
    cout << ct*(ct-1)/2 << "\n";
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
    int ct = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(gcd(arr[i] , arr[j])==1){
                ct++;
            }
        }
    }
    cout << ct << "\n";

    return 0;
}