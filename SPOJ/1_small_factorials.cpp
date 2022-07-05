#include <bits/stdc++.h>
using namespace std;

long long fact[101];

void init(){
	fact[0] = 1;
	fact[1] = 1;
	for(int i=2 ; i<=100 ; i++){
		fact[i] = i*fact[i-1];
	}
}

int main() {
	init();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fact[n] << "\n";
	}
	

	return 0;
}