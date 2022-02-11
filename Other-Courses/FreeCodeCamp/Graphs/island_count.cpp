#include<bits/stdc++.h>
using namespace std;

bool explore(vector<vector<char>> grid , int i ,int j , set<string> &visited){
  if(i<0 or i>=grid.size()) return false;
  if(j<0 or j>=grid[i].size()) return false;
  
  if(grid[i][j]=='W')return false;
  
  string temp = to_string(i)+','+to_string(j);
  
  if(visited.find(temp)!=visited.end()) return false;
  
  visited.insert(temp);
  
  explore(grid , i-1, j, visited);
  explore(grid , i+1, j, visited);
  explore(grid , i, j-1, visited);
  explore(grid , i, j+1, visited);
  
  return true;
}


int islandCount(std::vector<std::vector<char>> grid) {
  int ct = 0;
  set<string> visited;
  for(int i=0 ; i<grid.size() ; i++){
    for(int j=0 ; j<grid[i].size() ; j++ ){
      if(explore(grid , i , j, visited)){
        ct++;
      }
    }
  }
  return ct;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}