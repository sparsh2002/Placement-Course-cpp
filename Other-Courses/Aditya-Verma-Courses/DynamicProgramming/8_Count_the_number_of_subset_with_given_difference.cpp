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

int countSubset(vector<int> arr , int n  , int d ){
    long long sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }
    sum = (d+sum)/2;
    long long  t[n+1][sum+1];
    long long mod=1e9+7;
    for(int i=0 ; i<n+1 ; i++){
        for(int j=0 ; j<sum+1 ; j++){
            if(i==0){
                t[i][j] = 0;
            }
            if(j==0){
                t[i][j] = 1;
            }
        }
    }
    for(int i=1 ; i<n+1 ; i++){
            for(int j=1 ; j<sum+1 ; j++){
                if(arr[i-1]<=j){
                    t[i][j]=((t[i-1][j]%mod)+(t[i-1][j-arr[i-1]]%mod))%mod;
                }
                else{
                    t[i][j] = t[i-1][j]%mod;
                }
            }
    }
    return t[n][sum];

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , d;
    cin >> n >>  d;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout << countSubset(arr , n , d) << "\n";
    return 0;
}