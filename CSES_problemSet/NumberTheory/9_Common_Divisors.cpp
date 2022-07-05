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

int gcd(int a , int b){
    if(a==0){
        return b;
    }
    return gcd(b%a , a);
}


int MOD = 1000000007;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n; i++){
        cin >> arr[i];
    }
    
    int maxx = *max_element(arr.begin() , arr.end());

    vector<int> range(maxx+1 , 0);
    for(int i=0 ; i<n ; i++){
        range[arr[i]]++;
    }

    int ans = 1;
    for (int gcd = maxx; gcd > 0; gcd--) {
		int div = 0;
		for (int j = gcd; j <= maxx; j += gcd) {
			div += range[j];
		}
		if (div >= 2) {
			ans = gcd;
			break;
		}
	}

    cout << ans << "\n";
    return 0;
}