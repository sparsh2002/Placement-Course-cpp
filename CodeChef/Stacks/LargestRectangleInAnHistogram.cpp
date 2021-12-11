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

vector<int> previousSmallerNumberIndexWise(vector<int> arr){
    int n = arr.size();
    vector<int> ans;
    stack<int> st;
    for(int i=0 ; i<n ; i++){
        if(st.empty()){
            ans.push_back(-1);
            st.push(arr[i]);
        }
        else{
            if(arr[i]<st.top()){
                int ct = i;
                while((!st.empty()) and (arr[i]<st.top())){
                    st.pop();
                    ct--;
                }
                if(st.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(ct-1);
                }
                st.push(arr[i]);
            }
            else{
                ans.push_back(i-1);
                st.push(arr[i]);
            }
            }
        }
    return ans;
}

vector<int> nextSmallerNumberIndexWise(vector<int> arr){
    int n = arr.size();
    vector<int> ans;
    stack<int> st;
    for(int i=n-1 ;i>=0 ;i--){
        if(st.empty()){
            ans.push_back(6);
            st.push(arr[i]);
        }
        else{
            if(arr[i]<st.top()){
                int ct = i;
                while((!st.empty()) and (arr[i]<st.top())){
                    st.pop();
                    ct++;
                }
                if(st.empty()){
                    ans.push_back(6);
                }
                else{
                    ans.push_back(ct+1);
                }
                st.push(arr[i]);
            }
            else{
                ans.push_back(i+1);
                st.push(arr[i]);
            }
        }
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int returnMaxArea(vector<int> prev, vector<int> next , vector<int> arr){
    int maxArea = 0;
    int area = 0;
    for(int i=0 ; i<arr.size() ; i++){
        area = arr[i] + ((i-prev[i]-1)*arr[i]) + ((next[i]-i-1)*arr[i]);
        maxArea = max(maxArea,area);
    }
    return maxArea;
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

    vector<int> prev,next;
    prev = previousSmallerNumberIndexWise(arr);
    next = nextSmallerNumberIndexWise(arr);

    cout << returnMaxArea(prev,next,arr) ;
    return 0;
}