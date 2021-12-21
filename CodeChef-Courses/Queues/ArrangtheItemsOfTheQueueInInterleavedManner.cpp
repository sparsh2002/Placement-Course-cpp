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

void solve(vector<int> &arr , int n , int k){
    queue <int> q;
    stack <int> st;
    for(int i=0 ; i<n ; i++){
        q.push(arr[i]);
    }
    int x,y;
    for(int i=0 ; i<k ; i++){
        x = q.front();
        q.pop();
        st.push(x);
    }
    while(!st.empty()){
        x = st.top();
        st.pop();
        q.push(x);
    }

    for(int i=0 ; i<k ; i++){
        x = q.front();
        q.pop();
        st.push(x);
    }
    for(int i=0 ; i<n ; i++){
        if(i%2==0){
            arr[i] = st.top();
            st.pop();
        }
        else{
            arr[i] = q.front();
            q.pop();
        }
    }

    reverse(arr.begin() , arr.end());
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    solve(arr, n , k);
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}