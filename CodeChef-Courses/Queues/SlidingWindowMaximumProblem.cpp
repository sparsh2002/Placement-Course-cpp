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

vector<int> SlidingWindowMaximum(vector<int>& A, int K) {
        deque<int> dq;
        vector<int> ans;
        for (int i=0; i<A.size(); i++) {
            if (!dq.empty() && dq.front() == i-K) dq.pop_front();
            while (!dq.empty() && A[dq.back()] < A[i])
                dq.pop_back();
            dq.push_back(i);
            if (i>=K-1) ans.push_back(A[dq.front()]);
        }
        return ans;
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
    vector<int> ans;
    ans = SlidingWindowMaximum(arr , k);
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }
    return 0;
}