// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
     int dp[501][501];
public:
 bool isPalidromic(string &s,int start,int end){
      if(start==end || start>end)
          return true;
       while(start<end)
       {
           if(s[start] != s[end])
               return false;
           
           start++;
           end--;
       } 
       return true;
   }
   
   
    int minCostPartition(string &s, int i, int j){
        int mn=INT_MAX;
        if(i>=j)
          return 0;
        if(isPalidromic(s,i,j))
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
      
        for(int k=i;k<j;k++){
            int x=minCostPartition(s,i,k)+minCostPartition(s,k+1,j)+1;
            if(x<mn)
              mn=x;
         }
         return dp[i][j]=mn;
    } 
   
   int palindromicPartition(string str)
   {
        memset(dp,-1,sizeof(dp));
        return minCostPartition(str,0,str.length()-1);
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends