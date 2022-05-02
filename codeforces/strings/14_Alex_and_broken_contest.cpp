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
    string s;
    cin>>s;
    int n = s.length();
    
    int cnt=0;
    for(int i=0;i<n;i++){
    
        if( i+5<=n && s.substr(i,5)=="Danil" )cnt++;
        if( i+4<=n && s.substr(i,4)=="Olya" )cnt++;
        if( i+5<=n && s.substr(i,5)=="Slava" )cnt++;
        if( i+3<=n && s.substr(i,3)=="Ann" )cnt++;
        if( i+6<=n && s.substr(i,6)=="Nikita" )cnt++;
    
    }
    
    
    if(cnt == 1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}