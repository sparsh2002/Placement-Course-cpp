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

string removeDuplicate(string s){
    int n = s.size();
    stack<char> st;
    string ans = "";
    for(int i=0 ; i<n ; i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(s[i]==st.top()){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
       ans = st.top() +ans;
       st.pop();
    }
    return  ans;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout <<  removeDuplicate(s) << "\n";

    return 0;
}