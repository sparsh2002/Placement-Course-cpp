class Solution {
public:
    int solve(string x , string y , int n , int m){
        if(n==0 or m==0){
            return 0;
        }
        if(x[n-1]==y[m-1]){
            return (1+solve(x,y,n-1,m-1));
        }
        
        return max(solve(x,y,n-1,m) , solve(x,y,n,m-1));
    }
    int longestCommonSubsequence(string x, string y) {
        int n = x.size();
        int m = y.size();
        int ans =  solve(x,y,n,m) ;
        return ans;
    }
};