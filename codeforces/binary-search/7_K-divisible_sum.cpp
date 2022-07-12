#include<bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    long long n, k;
    cin >> n >> k;
    
    long long cf = (n + k - 1) / k;
    k *= cf;
    
    cout << (k + n - 1) / n << endl;
  }
  return 0;
}