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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ct = 0;
        vector<int> ans;
        while(n!=0){
            if ((n%10)*pow(10,ct) !=0)
            ans.push_back((n%10)*pow(10,ct)) ;
            n = n/10;
            ct++;
        }
        cout << ans.size() << "\n";
        for(int i=0 ; i<ans.size() ; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}