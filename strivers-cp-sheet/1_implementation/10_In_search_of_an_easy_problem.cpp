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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    bool sahi = false;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        if(x==1){
            sahi = true;
        }
    }

    if(sahi){
        cout << "HARD" << "\n";
    }
    else{
        cout << "EASY" << "\n";
    }
    return 0;
}