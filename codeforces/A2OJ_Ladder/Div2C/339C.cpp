// author: sparsh
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

  

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int m;
    cin >> m;
    int n = s.size();
    int balance = 0;
    bool turn = true;
    vi ans;
    int prev = -1;
    rep(i , 0 ,m){
        if(turn){
            bool find = false;
            rep(j , 1 , 11){
                if(s[j-1]=='1' and balance+j!=0 and j!=prev){
                    find = true;
                    ans.push_back(j);
                    prev = j;
                    balance += j;
                    break;
                }
            }

            if(!find){
                cout << "NO\n";
                return 0;
            }
        }
        else{
            bool find = false;
            rep(j , 1 , 11){
                if(s[j-1]=='1' and balance-j!=0 and j!=prev){
                    find = true;
                    ans.push_back(j);
                    prev = j;
                    balance -= j;
                    break;
                }
            }

            if(!find){
                cout << "NO\n";
                return 0;
            }
        }
        // cout << balance << " ";
        if(balance==0 or balance>10){
            cout << "NO\n";
            return 0;
        }
        
        turn = !turn;
    }
    
    cout << "YES\n";
    print_v(ans , m);
    cout << "\n";

    

    return 0;
}