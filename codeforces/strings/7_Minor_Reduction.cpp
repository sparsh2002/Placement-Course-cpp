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
        bool flag = 0;
        for (int i = s.size() - 2; ~i; i--) {
            if (s[i] - '0' + s[i + 1] - '0' >= 10) {
                int x = s[i] - '0' + s[i + 1] - '0';
                s[i] = x / 10 + '0', s[i + 1] = x % 10 + '0';
                cout << s << '\n';
                flag = 1; break;
            }
        }
        if (!flag) {
            int x = s[0] - '0' + s[1] - '0';
            s.erase(s.begin());
            s[0] = x + '0';
            cout << s << '\n';
        }
    }

    return 0;
}