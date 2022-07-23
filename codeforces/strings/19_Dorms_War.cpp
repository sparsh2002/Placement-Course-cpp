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
#define sort_v(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

set<char> st;

bool isSpecial(char ch){
    return st.find(ch)!=st.end();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        st.clear();
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k;
        cin >> k;
        rep(i , 0 , k){
            char ch;
            cin >> ch;
            st.insert(ch);
        }
        
        int ct =0;

        while(true){
            int i=0;
            bool found = false;
            while(i<s.size()-1){
                if(isSpecial(s[i+1])){
                    s.erase(0 ,i+1);
                    found = true;
                    ct += i+1;
                    i = 0;
                }
                else{
                    i++;
                }
            }

            if(!found){
                break;
            }
            if(s.size()<=1){
                break;
            }
            
        }

        cout << ct << "\n";
    }

    return 0;
}