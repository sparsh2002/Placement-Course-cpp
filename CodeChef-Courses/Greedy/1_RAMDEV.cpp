#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
	ll l,b;
	cin >> l >> b;
	ll n;
	cin >> n;
	ll ct = 0;
	for(int i=0 ; i<n ; i++){
	    ll L, B;
	    cin >> L >> B;
	    ct += max(((L/l) * (B/b)),((L/b)*(B/l)));
	}
	cout << ct << "\n";
	return 0;
}
