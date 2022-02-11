#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

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



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}