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
#define sort_v(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string target = "hello";
    int n = target.size();
    string s;
    cin >> s;
    int m = s.size();
    int i=0 , j =0;
    bool ans = true;
    if(m<n) ans = false;
    else{
        while(i<n and j<m){
            while(j<m and s[j]!=target[i]){
                j++;
            }
            // cout << target[i] << " ";
            if(j==m or s[j]!=target[i]){
                ans = false;
                break;
            }
            j++;
            i++;
        }
        if(i!=n) ans = false;
    }
    
    if(ans){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }

    return 0;
}