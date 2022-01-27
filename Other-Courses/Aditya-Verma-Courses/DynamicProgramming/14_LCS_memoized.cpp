class Solution {
public:
    int t[1001][1001];
    int solve(string x , string y , int n , int m){
        if(n==0 or m==0){
            return 0;
        }
        if(t[m][n]!=-1){
            return t[m][n];
        }
        if(x[n-1]==y[m-1]){
            return t[m][n] = (1+solve(x,y,n-1,m-1));
        }
        
        return t[m][n] = max(solve(x,y,n-1,m) , solve(x,y,n,m-1));
    }
    int longestCommonSubsequence(string x, string y) {
        int n = x.size();
        int m = y.size();
        memset(t, -1 , sizeof(t));
        int ans =  solve(x,y,n,m) ;
        return ans;
    }
};