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

void LeftShiftCheck(int n , int k){
    if((1<<(k-1))&n){
        cout << "set" << "\n";
    }
    else{
        cout << "unset" << "\n";
    }
}


void RightShiftCheck(int n , int k){
    if((n>>(k-1))&1){
        cout << "set" << "\n";
    }
    else{
        cout << "unset" << "\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    LeftShiftCheck(n,k);
    RightShiftCheck(n,k);
    return 0;
}