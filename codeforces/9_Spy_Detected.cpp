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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        int x;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin >> x;
            arr[i] = x;
            mp[x]++;
        }
        int key = 0;
        map<int,int>::iterator it = mp.begin();
        for(it = mp.begin() ; it!=mp.end() ; it++){
            if(it->second==1){
                key = it->first;
            }
        }
        for(int i=0 ; i<n ; i++){
            if(arr[i]==key){
                cout << i+1 << "\n";
                break;
            }
        }
    }

    return 0;
}