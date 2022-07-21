#include <bits/stdc++.h>

using namespace std;
#define long long ll

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0;
    for (int i=0 ; i<n ; i++) {
        int e;
        cin >> e;
        v[i] = e;
        if (e % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }
    if (a % 2 != b % 2) {
        cout << "NO\n";
    } else {
        if (a % 2 == 0) {
            cout << "YES\n";
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
