class Solution {
public:
    unordered_map<int,vector<int>>createGraph(vector<vector<int>> edges){
      unordered_map<int , vector<int>> graph;
      for(auto it:edges){
        int a = it[0];
        int b = it[1];

        graph[a].push_back(b);
        graph[b].push_back(a);

      }
      return graph;
    }
    
    bool hasPath(unordered_map<int , vector<int>> graph , int src , int dst , set<int> &s){
        if(src==dst) return true;
        if(s.find(src)!=s.end()) return false;
        
        s.insert(src);
        
        for(int i=0 ; i<graph[src].size() ; i++){
            if(hasPath(graph , graph[src][i] , dst , s)) return true;
        }
        
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph = createGraph(edges);
        
        set<int> s;
        
        return hasPath(graph , source , destination , s);
    }
};