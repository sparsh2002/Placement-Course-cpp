#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int v , vector<vector<int> > &adj){
	vector<int> bfs;
	vector<int> vis(v , 0);

	for(int i=1 ; i<v ; i++){
		if(!vis[i]){
			queue<int> q;
			q.push(i);
			vis[i] = 1;
			while(!q.empty()){
				int node = q.front();
				q.pop();
				bfs.push_back(node);


				for(int j=0 ; j<adj[node].size() ; j++){
					if(!vis[adj[node][j]]){
						q.push(adj[node][j]);
						vis[adj[node][j]] = 1;
					}
				}
			}
		}
	}

	return bfs;
}

void dfsOfGraph(int node , vector<vector<int> >  &adj , vector<bool> &vis , vector<int> &dfs){
	dfs.push_back(node);
	vis[node] = true;
	for(int i=0 ; i<adj[node].size() ; i++){
		if(!vis[adj[node][i]]){
			dfsOfGraph(adj[node][i] , adj, vis , dfs);
		}
	}
}


int main(){
	int n;
	cin >> n;
	cout << n+2 ;
	return 0;
}