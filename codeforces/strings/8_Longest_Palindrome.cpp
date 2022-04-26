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
    int n,m;
    cin >> n >> m;
    vector<string> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    string ans = "";
    vector<bool> mark(n , false);
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            string rev = arr[j];
            reverse(rev.begin() , rev.end());
            if(arr[i]==rev){
                ans = arr[i] + ans + arr[j];
                mark[i] = true;
                mark[j] = true;
            }
            else if(arr[i]==arr[j]){
                ans = arr[i] + ans + arr[j];
                mark[i] = true;
                mark[j] = true;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        string rev = arr[i];
        reverse(rev.begin() , rev.end());
        if(arr[i]==rev and !mark[i]){
            int x = ans.size();
            string temp = ans.substr(0 , x/2) + arr[i] + ans.substr(x/2 , x/2);
            ans = temp;
            break;
        }
    }
    cout << ans.size() << "\n";
    cout << ans << "\n";
    return 0;
}