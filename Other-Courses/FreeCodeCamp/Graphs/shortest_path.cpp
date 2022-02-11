#include<bits/stdc++.h>
using namespace std;

unordered_map<string,vector<string>>
  createGraph(vector<tuple<string , string>> edges){
  unordered_map<string,vector<string>> graph;
  for(auto it:edges){
    string a = get<0> (it);
    string b = get<1> (it);
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  return graph;
}


int shortestPath(std::vector<std::tuple<std::string, std::string>> edges,
                 std::string src, std::string dst) {
  unordered_map<string,vector<string>> graph = createGraph(edges);
  set<string> visited;
  queue<pair<string , int>> q;
  visited.insert(src);
  q.push({src , 0});
  while(!q.empty()){
    auto curr = q.front();
    if(curr.first==dst) return curr.second;
    q.pop();
    for(int i=0 ; i<graph[curr.first].size() ; i++){
      if(visited.find(graph[curr.first][i])==visited.end()){
        visited.insert(graph[curr.first][i]);
        q.push({graph[curr.first][i] , curr.second+1});
      }
    }
  }
  return -1;
}



void run() {
  std::vector<std::tuple<std::string, std::string>> edges {
  {"a", "c"},
  {"a", "b"},
  {"c", "b"},
  {"c", "d"},
  {"b", "d"},
  {"e", "d"},
  {"g", "f"}
};
 
  unordered_map<string,vector<string>> graph = createGraph(edges);
  
  for(auto it:graph){
    cout << it.first << "->";
    for(int i=0 ; i<it.second.size() ; i++){
      cout << it.second[i] << " ";
    }
    cout << "\n";
  }   
}