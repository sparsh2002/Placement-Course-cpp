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
    string s;
    cin >> s;
    std::map<char,int> mp;
    for(int i=0 ; i<s.size() ; i++ ){
        if(mp.find(s[i])==mp.end()){
            // cout << "yes" << "\n";
            mp.insert(make_pair(s[i] , 1));
            // mp.insert({s[i] , i});
        }
        else{
            int x = mp.find(s[i])->second;
            // cout << x << "\n";
            x++;
            mp[s[i]] = x;
        }
    }
    std::map<char,int>::iterator it;
    // cout << mp.size() << "\n";
    // for(it = mp.begin() ; it!=mp.end(); it++){
    //     cout << it->first << " " << it->second << "\n";
    // }
    if(mp.size()%2==0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }
    return 0;
}