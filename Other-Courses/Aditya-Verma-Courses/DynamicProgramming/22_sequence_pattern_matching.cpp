class Solution {
public:
    bool isSubsequence(string a, string b) {
        int m = a.size();
        int n = b.size();
        
        int t[m+1][n+1];
        
        for(int i=0 ; i<m+1 ; i++){
            for(int j=0 ; j<n+1 ; j++){
                if(i==0 or j==0){
                    t[i][j] = 0;
                }
            }
        }
        
        for(int i=1 ; i<m+1 ; i++){
            for(int j=1 ; j<n+1 ; j++){
                if(a[i-1]==b[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j] , t[i][j-1]);
                }
            }
        }
        if(t[m][n]==m){
            return true;
        }
        return false;
    }
};