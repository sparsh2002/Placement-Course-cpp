#include<bits/stdc++.h>
using namespace std;

unordered_map<string , vector<string>> createGraph(vector<tuple<string,string>> edges){
  unordered_map<string , vector<string>> graph;
  for(auto it:edges){
    string a = get<0> (it);
    string b = get<1>( it);

    graph[a].push_back(b);
    graph[b].push_back(a);
  
  }
  return graph;
}

bool hasPath(unordered_map<string , vector<string>> graph ,
             string src , string dst , set<string>& s ){
  if(src==dst) return true;
  if(s.find(src)!=s.end()) return false;
  s.insert(src);
  for(int i=0 ; i<graph[src].size() ; i++){
    if(hasPath(graph , graph[src][i] , dst , s)){
      return true;
    }
  }
  
  return false;
}


bool undirectedPath(vector<tuple<string,string>> edges,
                    string src,string dst) {
  unordered_map<string , vector<string>> graph = createGraph(edges);
  set <string> s;
  return hasPath(graph , src , dst , s);
}



void run() {
  std::vector<std::tuple<std::string, std::string>> edges {
  {"i", "j"},
  {"k", "i"},
  {"m", "k"},
  {"k", "l"},
  {"o", "n"}
  };
  
  unordered_map<string , vector<string>> graph = createGraph(edges);
  cout << graph.size() << "\n";
  for(auto it:graph){
    cout << it.first << " -> ";
    for(auto el:it.second){
      cout << el << " ";
    }
    cout<<"\n";
  }
}