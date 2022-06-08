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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        sort(arr.begin() , arr.end() , greater<int>());

        vector<int> ans;
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
                i++;
            }
        }
        if(ans.size()<2){
            cout << -1 << "\n";
        }
        else{
            cout << ans[0]*ans[1] << "\n";
        }
        
        
    }

    return 0;
}