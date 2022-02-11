#include<bits/stdc++.h>
using namespace std;


bool explore(unordered_map<int , vector<int>> graph ,int curr ,  set<int> &visited){
  if(visited.find(curr)!=visited.end()) return false;
  visited.insert(curr);
  for(int i=0 ; i<graph[curr].size() ; i++ ){
    explore(graph , graph[curr][i] , visited);
  }
  
  return true;
}

int connectedComponentsCount(std::unordered_map<int, std::vector<int>> graph) {
  int ct = 0;
  set<int> visited;
  
  for(auto it: graph){
    if(explore(graph , it.first , visited)) ct++;
  }
  return ct;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}