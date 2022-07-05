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
const ll N = 90000001;
double PI = acos(-1);
int MOD = 1000000007;

vector<int> primes;
bool arr[N+1];
void seive(){
    arr[0] = arr[1] = true;
    for (int i = 2; i * i < N; i++) {
        if (!arr[i]) {
            for (int j = i * i; j <= N; j += i)
                arr[j] = true;
        }
    }
    // comment this part if u need not to store the primes
    for(int i=2 ; i<N ; i++){
        if(!arr[i]) primes.push_back(i);
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    seive();
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << primes[k-1] << "\n";
    
    }



    return 0;
}