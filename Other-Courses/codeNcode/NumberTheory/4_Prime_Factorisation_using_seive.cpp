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
int MOD = 1000000007;

int arr[N+1];


void seive(){
    for(int i=1 ; i<=N ; i++) arr[i] = -1;
    for(int i=2 ; i<=N ; i++){
        if(arr[i]==-1){
            for(int j=i ; j<=N ; j+=i){
                if(arr[j]==-1){
                    arr[j] = i;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    seive();
    int n;
    cin >> n;
    while(n>1){
        cout << arr[n] << " ";
        n = n/arr[n];
    }

    return 0;
}