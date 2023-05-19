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

void flip(string &s , int i){
    for(int k=0 ; k<=i ; k++){
        if(s[k]=='0') s[k]='1';
        else if(s[k]=='1') s[k]='0';
    }
}
void reverse(string &s , int i){
    string temp = s.substr(0 , i+1);
    reverse(temp.begin() , temp.end());
    for(int k=0 ; k<=i ; k++){
        s[k] = temp[k];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a , b;
        cin >> a >> b;
        int i=0;
        vi moves;
        while(i<n){
            if(a[i]!=b[i]){
                if(i>0)moves.push_back(i+1);
                moves.push_back(1);
                if(i>0)moves.push_back(i+1);
                if(i>0)flip(a , i);
                flip(a , 0);
                if(i>0)flip(a , i);

            }
            i++;
        }

        cout << moves.size() << " ";
        print_v(moves , moves.size());
        cout << "\n";
    }

    return 0;
}