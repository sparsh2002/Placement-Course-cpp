// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int v, vector<int>arr[]){
	    vector<vector<int> > adj(v);
	    for(int i=0 ; i<v ; i++){
	        for(int j=0 ; j<arr[i].size() ; j++){
	            adj[i].push_back(arr[i][j]);
	        }
	    }
	   
	    vector<int> vis(v , -1);
        int prev = 1;
        for(int i=0 ; i<v ; i++){
            if(vis[i]==-1){
                queue<int> q;
                q.push(i);
                if(prev==1){
                    vis[i] = 0;
                    prev = 0;
                }
                else{
                    vis[i] = 1;
                    prev = 1;
                }
    
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
    
                    for(int j=0 ; j<adj[node].size() ; j++){
                        if(vis[adj[node][j]]==-1){
                            q.push(adj[node][j]);
                            if(vis[node]==1){
                                vis[adj[node][j]] = 0;
                                // prev = 0;
                            }
                            else{
                                vis[adj[node][j]] = 1;
                                // prev = 1;
                            }
                        }
                        else if(vis[node]==vis[adj[node][j]]){
                            // cout << adj[node][j] << "\n";
                            return false;
                        }
                        
                    }
                    if(vis[node]==1){
                        prev = 0;
                    }
                    else{
                        prev = 1;
                    }
                }
            }
        }
    
        return true;
    }

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends