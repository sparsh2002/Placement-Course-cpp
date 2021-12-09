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

vector<int> nextSmallerNumber(vector<int> arr){
    int n = arr.size();
    vector<int> ans;
    stack<int> st;
    for(int i=n-1 ;i>=0 ;i--){
        if(st.empty()){
            ans.push_back(-1);
            st.push(arr[i]);
        }
        else{
            if(arr[i]<st.top()){
                while((!st.empty()) and( arr[i]<st.top())){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top());
                }
                st.push(arr[i]);
            }
            else{
                ans.push_back(st.top());
                st.push(arr[i]);
            }
        }
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    ans = nextSmallerNumber(arr);
    for(int i=0 ; i<n ; i++){
        cout << ans[i] << " ";
    }

    return 0;
}