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
        int m = 0, n = (int)s.size();
        vector<bool>prev(26, false);
        for(int i=0 ; i<s.size() ; i++){
            if(prev[s[i] - 'a']){
                m += 2;
                for(int j = 0; j < 26; j++) prev[j] = false;
            }
            else prev[s[i] - 'a'] = true;
        }
    
        cout << n - m << endl;
        }

    return 0;
}