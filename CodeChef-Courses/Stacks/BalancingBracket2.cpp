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

bool match(char c1 , char c2){
    if(c1=='(' and c2==')'){
        return true;
    }
    if(c1=='[' and c2==']'){
        return true;
    }
    if(c1=='{' and c2=='}'){
        return true;
    }
    if(c1=='<' and c2=='>'){
        return true;
    }
    return false;
}

bool balancedBracket(string s){
    int n = s.size();
    stack<char> st;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{' or s[i]=='<'){
            st.push(s[i]);
        }
        else if(s[i]==')' or s[i]==']' or s[i]=='}' or s[i]=='>')
        {
            if(match(st.top() , s[i])){
                st.pop();
            }
            else{
                return false;
            }
        }

    }
    if(st.empty()){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << balancedBracket(s) << "\n";

    return 0;
}