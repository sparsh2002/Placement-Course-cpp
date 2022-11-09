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

map<string,int> mp;

int months[12] = {31 , 28 , 31, 30,31 , 30 , 31, 31 , 30 , 31, 30 ,31};

bool isValidDate(int d , int n){
    if(d>months[n-1] or d<1) return false;
    return true;
}

bool isValid(string s){
    int dashcount = 0;

    rep(i, 0 , 10){
        if(s[i]=='-')dashcount++;
    }

    if(dashcount!=2 or s[2]!='-' or s[5]!='-') return false;

    string year = s.substr(6);
    // cout << s << "\n";
    string month = s.substr(3 , 2);

    string date = s.substr(0 , 2);

    


    if(stoi(month)<1 or stoi(month)>12) return false;

    if(!isValidDate(stoi(date) , stoi(month))) return false;


    if(stoi(year)<2013 or stoi(year)>2015) return false;

    return true;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int i=0;
    int n = s.size();
    while(i+10<=n){
        // cout << s.substr(i , 10) << "\n";
        if(isValid(s.substr(i , 10))){
            // cout << s.substr(i , 10) << "\n";
            mp[s.substr(i , 10)]++;
        }
        i++;
    }

    int maxx = 0;

    string ans;

    map<string,int>::iterator it;
    for(it = mp.begin() ; it!=mp.end() ; it++){
        if(it->second>maxx){
            ans = it->first;
            maxx = it->second;
        }
    }

    cout << ans;

    return 0;
}