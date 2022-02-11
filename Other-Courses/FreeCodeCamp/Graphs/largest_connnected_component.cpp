#include<bits/stdc++.h>
using namespace std;

bool explore(unordered_map<int , vector<int>> graph ,int curr ,  set<int> &visited ,int& ans){
  if(visited.find(curr)!=visited.end()) return false;
  visited.insert(curr);
  for(int i=0 ; i<graph[curr].size() ; i++ ){
    explore(graph , graph[curr][i] , visited, ans);
  }
  ans++;
  return true;
}

int exploreSize(unordered_map<int , vector<int>> graph , set<int> &visited , int curr){
  if(visited.find(curr)!=visited.end()) return 0;
  visited.insert(curr);
  int size = 1;
  for(int i=0 ;i<graph[curr].size() ; i++ ){
    size += exploreSize(graph , visited , graph[curr][i]);
  }
  return size;
}

int largestComponent(std::unordered_map<int, std::vector<int>> graph) {
  int maxx = 0;
  set<int> visited;
  
  
  // int ans = 0;
  //for(auto it: graph){
  //  if(explore(graph , it.first , visited , ans)) {
  //    maxx = max(maxx , ans);
  //     ans = 0;
  //  };
  // }   
  
  for(auto it:graph){
    maxx = max(maxx , exploreSize(graph , visited , it.first));
  }
  return maxx;
  
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}