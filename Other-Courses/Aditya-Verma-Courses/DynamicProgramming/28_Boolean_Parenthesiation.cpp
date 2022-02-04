// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    map<string,int> mp;
    int mod = 1003;
    int solve(string &s , int i , int j , bool isTrue){
        if(i>j){
            return 0;
        }
        if(i==j){
            if(isTrue==true){
                return s[i]== 'T';
            }
            else{
                return s[i]== 'F';
            }
            
        }
        string key = to_string(i)+" "+to_string(j)+" "+to_string(isTrue);
        
        if(mp.find(key) != mp.end())
            return mp[key];
            
        int ans = 0;
        
        for(int k=i+1 ; k<=j-1 ; k = k+2){
            int lT = solve(s ,i ,k-1 ,true );
            int lF = solve(s ,i ,k-1 ,false );
            int rT = solve(s ,k+1 , j ,true );
            int rF = solve(s ,k+1 , j , false);
            
            if(s[k]=='&'){
                if(isTrue==true){
                    ans += (lT*rT)% mod;
                }
                else{
                    ans += (lT*rF + lF*rF + lF*rT)%mod;
                }
            }
            else if(s[k]=='|'){
                if(isTrue==true){
                    ans += (lT*rF + lT*rT + lF*rT)%mod;
                }
                else{
                    ans += (lF*rF)%mod;
                }
            }
            else if(s[k]=='^'){
                if(isTrue==true){
                    ans += (lT*rF + lF*rT)%mod;
                }
                else{
                    ans += (lF*rF + lT*rT)%mod;
                }
            }
        }
        
        return mp[key] = ans % mod;
    }
    int countWays(int n, string s){
        mp.clear();
        return solve(s , 0 , n-1 , true);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends