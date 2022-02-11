class Solution {
public:
    bool explore(unordered_map<int , vector<int>> graph ,int curr , vector<bool>&visited){
      if(visited[curr]==true) return false;
      visited[curr] =true;
      for(int i=0 ; i<graph[curr].size() ; i++ ){
        explore(graph , graph[curr][i] , visited);
      }

      return true;
    }
    int findCircleNum(vector<vector<int>>& v) {
        int ct = 0;
        unordered_map<int , vector<int>> graph;
        int n = v.size();
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(v[i][j]==1){
                    graph[i+1].push_back(j+1);
                    // graph[j+1].push_back(i+1);
                }
            }
        }
        
        vector<bool>visited(n,false);
        
        // for(auto it:graph){
        //     cout << it.first << "->";
        //     for(int i=0 ; i<it.second.size() ; i++){
        //         cout << it.second[i] << " ";
        //     }
        //     cout << "\n";
        // }
        
        for(auto it: graph){
            if(explore(graph , it.first , visited)) ct++;
        }
        
        return ct;
    }
};