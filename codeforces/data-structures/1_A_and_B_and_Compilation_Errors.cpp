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
    ll s1 =0 , s2 =0,s3 =0;
    int x;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        s1 += x;
    }
    for(int i=0 ; i<n-1 ; i++){
        cin >> x;
        s2 += x;
    }
    for(int i=0 ; i<n-2 ; i++){
        cin >> x;
        s3 += x;
    }
    cout << s1-s2 << "\n";
    cout << s2-s3 << "\n";
    return 0;
}