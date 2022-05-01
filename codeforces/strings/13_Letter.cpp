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
    std::string s1,s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    // cout << s1 << "\n";
    // cout << s2 << "\n";
    unordered_map<char,int> mp1 ,mp2;
    for(int i=0 ; i<s1.size() ; i++){
        if(s1[i]!=' ') mp1[s1[i]]++;
    }
    for(int i=0 ; i<s2.size() ; i++){
        if(s2[i]!=' ') mp2[s2[i]]++;
    }
    bool yes = true;
    unordered_map<char,int>::iterator it = mp2.begin();
    for(it =mp2.begin() ; it!=mp2.end() ; it++){
        if(mp1.find(it->first)==mp1.end()){
            yes = false;
            // cout << it->first << " " << it->second << "\n";
            break;
            
        }
        else{
            unordered_map<char,int>::iterator jt = mp1.find(it->first);
            if(jt->second<it->second){
                yes = false;
                // cout << it->first << " " << it->second << "\n";
                break;
            }
        }
    }
    if(yes){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}