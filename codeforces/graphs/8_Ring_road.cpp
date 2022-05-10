#include<bits/stdc++.h>
using namespace std;
 
const int N = 105;
vector<int> g[N];
int cost[N][N];
int ans = INT_MAX, c;
 
void dfs(int src, int par) {
  if (src == 1 && par != -1) {
    ans = min(ans, c);
    c = 0;
    return;
  }
  for (auto v: g[src]) {
    if (v != par) {
      c += cost[src][v];
      dfs(v, src);
    }
  }
}
 
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
 
  int n; cin >> n;
  while (n--) {
    int u, v, w; cin >> u >> v >> w;
    g[u].push_back(v);
    g[v].push_back(u);
    cost[u][v] = 0;
    cost[v][u] = w;
  }
  dfs(1, -1);
  cout << ans << '\n';
  return 0;
}
 