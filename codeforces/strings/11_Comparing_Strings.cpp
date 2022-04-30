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
    string a,b;
    cin >> a >> b;
    if(a.size()!=b.size()) {
		cout << "NO" << "\n"; 
		return 0;
	}
	unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
	for(int i=0 ; i<a.size() ; i++){
		mp1[a[i]]++;
	}
	for(int i=0 ; i<b.size() ; i++){
		mp2[b[i]]++;
	}
   
    bool sahi = true;
    for(auto it:mp1){
        if(mp2.find(it.first)==mp2.end()){
            sahi = false;
            break;
        }
        else{
            auto jt = mp2.find(it.first);
            if(jt->second!=it.second){
                sahi = false;
                break;
            }
        }
    }
    if(sahi){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    return 0;
}