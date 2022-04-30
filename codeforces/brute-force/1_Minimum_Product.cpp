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
        ll a,b,x,y ,n;
        cin >> a >> b >> x >> y >> n;
        priority_queue<char,ll> q;
        q.push(make_pair('a' , a));
        q.push(make_pair('b' , b));
        bool yes = true;
        while(yes){
            pair<char,ll> p = q.top();
            if(n==0){
                break;
            }
            char ch = p.first();
            ll num = p.second();
            if(ch=='a'){
                if(num<=x){
                    num--
                }
            }
            else{
                if(b<=num)
            }
        }
        cout << a*b << "\n";

    }

    return 0;
}