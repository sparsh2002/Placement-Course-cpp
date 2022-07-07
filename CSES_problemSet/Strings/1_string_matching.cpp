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

#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)
long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a , b;
    cin >> a >> b;
    int ct = 0;
    int i=0 , j=0;
    if(a.size()==0 and b.size()==0) return 0;
    if(a.size()==0) return -1;
    if(b.size()==0) return 0;
    if(b.size()>a.size()) return -1;
    int k = b.size();
    int n = a.size();
    while(i<n){
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(a.substr(i , j-i+1)==b)ct++;
            i++;
            j++;
        }
    }

    cout << ct << "\n";

    return 0;
}