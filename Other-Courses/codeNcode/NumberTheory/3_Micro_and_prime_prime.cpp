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
const ll N = 10000001;
double PI = acos(-1);
int MOD = 1000000007;

int pp[N];

bool arr[N+1];
int cumm[N];
void seive(){
    arr[0] = arr[1] = true;
    for (int i = 2; i * i < N; i++) {
        if (!arr[i]) {
            for (int j = i * i; j < N; j += i)
                arr[j] = true;
        }
    }
    int ct = 0;
    for(int i=0 ; i<N ; i++){
        if(!arr[i]){
            ct++;
        }
        if(!arr[ct]){
            pp[i] = 1;
        }
        else{
            pp[i] = 0;
        }
    }
    for(int i=0 ; i<N ; i++){
        cumm[i] = pp[i] + cumm[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    seive();
    int t;
    cin >> t;
    while(t--){
        int l ,  r;
        cin >> l >> r;
        cout << cumm[r]-cumm[l-1] << "\n";
    }

    return 0;
}