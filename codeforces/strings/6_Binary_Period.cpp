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
        string s;
        cin >> s;
        int n = s.size();
        char x = s[0];
        bool allsame = true;
        for(int i=0 ; i<n ; i++){
            if(s[i]!=x){
                allsame = false;
            }
        }
        if(allsame){
            cout << s << "\n";
        }
        else{
            for(int i=0 ; i<2*n ; i++){
                if(i%2==0){
                    cout << "0";
                }
                else{
                    cout << "1";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}