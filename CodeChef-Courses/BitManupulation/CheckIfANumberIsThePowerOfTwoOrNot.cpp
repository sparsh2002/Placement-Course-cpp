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

// void initialize(int * table){
//     table[0] = 0;
//     for(int i=1 ; i<256 ; i++){
//         table[i] = table[i>>1] + (i&1);
//     }
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int table[256];
    // initialize(table);

    int n;
    cin >> n;
    if((n&(n-1))==0){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
    // int ct = 0;
    // for(int i=0 ; i<4 ; i++){
    //     ct += table[n&255];
    //     n = n >> 8;
    // }
    // cout << ct << "\n";
    // if(ct==1){
    //     cout << "Yes, the number is power of Two" << "\n";
    // }
    // else{
    //     cout << "No, the number isn't power of Two" << "\n";
    // }
    return 0;
}