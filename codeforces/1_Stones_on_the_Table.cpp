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
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0 ; i<s.size() ; i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(!st.empty() and st.top()==s[i]){
            while(!st.empty() and st.top()==s[i]){
                st.pop();
            }
            st.push(s[i]);
        }
        else{
            st.push(s[i]);
        }
    }
    int x = 0;
    while(!st.empty()){
        st.pop();
        x++;
    }

    cout << s.size()-x << "\n";
    return 0;
}