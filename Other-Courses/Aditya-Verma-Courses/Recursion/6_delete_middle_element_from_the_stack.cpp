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

void solve(stack<int> &st,int k){
    if(st.empty()){
        return;
    }
    else if(st.size()==1 or k==1){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st , k-1);
    st.push(temp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> st;
    int x;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        st.push(x);
    }
    int k = (st.size()/2)  + 1;
    solve(st,k);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}