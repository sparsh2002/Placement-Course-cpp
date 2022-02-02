// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[501][501];
    bool isPallindrome(string &s , int i , int j){
        if(i==j){
            return true;
        }
        if(i>j){
            return true;
        }
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    int solve(string &s , int i , int j){
        if(i>=j){
            return 0;
        }
        if(isPallindrome(s , i , j)){
            return 0;
        }   
        if(t[i][j]!=-1){
            return t[i][j];
        }
        
       
        int mn = INT_MAX;
        
        for(int k = i ; k<j ; k++){
            int temp = solve(s , i , k)+solve(s , k+1 , j)+1;
            if(temp<mn){
                mn = temp;
            }
        }
        return t[i][j] =  mn;
    }
    int palindromicPartition(string s)
    {
        memset(t , -1 , sizeof(t));
        return solve(s , 0 , s.size()-1);
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