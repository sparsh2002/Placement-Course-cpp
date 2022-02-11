#include<bits/stdc++.h>
using namespace std;

int exploreSize(vector<vector<char>> grid , int i , int j , set<string>& visited){
  if(i<0 or i>=grid.size()) return -1;
  if(j<0 or j>=grid[i].size()) return -1;
  
  if(grid[i][j]=='W') return -1;
  
  string temp = to_string(i)+","+to_string(j);
  
  if(visited.find(temp)!=visited.end()) return -1;
  
  visited.insert(temp);
  
  int size = 1;
  
  size += max(exploreSize(grid , i-1 , j , visited) , 0);
  size += max(exploreSize(grid , i+1 , j , visited),0);
  size += max(exploreSize(grid , i , j-1 , visited) ,0);
  size += max(exploreSize(grid , i , j+1 , visited),0);
  
  return size;
  
}

int minimumIsland(std::vector<std::vector<char>> grid) {
  int minn = 0;
  set<string> visited;
  for(int i=0 ; i<grid.size() ; i++){
    for(int j=0 ; j<grid[i].size() ;j++){
      int size = exploreSize(grid , i ,j , visited);
      if(size!=-1 and (size<minn or minn==0)){
        minn = size;
      }
    }
  }
  
  return minn;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}