#include<bits/stdc++.h>
#include<unordered_map>
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
    string a,b,c;
    cin >> a >> b >> c;
    unordered_map<char,int> mp;
    for(int i=0 ; i<a.size() ; i++){
        mp[a[i]]++;
    }
    for(int i=0 ; i<b.size() ; i++){
        mp[b[i]]++;
    }
    for(int i=0 ; i<c.size() ; i++ ){
        mp[c[i]]--;
    }
    bool ha = true;
    for(auto it:mp){
        if(it.second!=0){
            ha = false;
        }
    }

    if(ha){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}