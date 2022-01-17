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


int kthGrammar(int n, int k) {
    if(n==1 and k==1){
        return 0;
    }
    int mid = pow(2,n-1)/2;
    if(k<=mid){
        return kthGrammar(n-1,k);
    }
    return !kthGrammar(n-1 , k-mid);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    cout << kthGrammar(n ,k) << "\n";

    return 0;
}