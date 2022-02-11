#include <unordered_map>
#include <vector>
#include <string>
using namespace std;


// depth first
bool hasPath(unordered_map<std::string,
             vector<std::string>> graph, string src, string dst) {
  if(src==dst){
    return true;
  }
  for(int i=0 ; i<graph[src].size() ; i++){
    if(hasPath(graph , graph[src][i] , dst)){
      return true;
    }
  }
  
  return false;
}


// breadth first
bool hasPath(unordered_map<std::string,
             vector<std::string>> graph, string src, string dst) {
  if(src==dst){
    return true;
  }
  queue<string> q;
  q.push(src);
  while(!q.empty()){
    string curr = q.front();
    if(curr==dst){
      return true;
    }
    q.pop();
    for(int i=0 ; i<graph[curr].size() ; i++){
      q.push(graph[curr][i]);
    }
    
  }
  return false;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}