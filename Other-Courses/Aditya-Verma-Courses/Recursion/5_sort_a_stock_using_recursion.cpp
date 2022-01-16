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

void insert(stack<int> &st , int temp){
    if(st.empty() or st.top()<=temp){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}

void sort(stack<int> &st){
    if(st.empty() or st.size()==1){
        return;
    }
    int temp = st.top();
    st.pop();
    sort(st);
    insert(st,temp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >>n;
    stack<int> st;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    sort(st);
    for(int i=0 ; i<n ; i++){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}