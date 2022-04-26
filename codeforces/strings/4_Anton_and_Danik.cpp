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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0 , d=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        cout << "Anton" << "\n";
    }
    else if(d>a){
        cout << "Danik" << "\n";
    }
    else{
        cout << "Friendship" << "\n";
    }
    return 0;
}