class Solution {
public:
    string longestPalindrome(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        string ans;
        int n=s.size();
        int res=0;
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(s[i-1]==s1[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=0;
                
                 if(dp[i][j]>res)
                    {
                        string temp=s.substr(i-dp[i][j],dp[i][j]);
                        string rev=temp;
                        reverse(rev.begin(),rev.end());
                        if(temp==rev){    //check if common substring is palindromic or not
                            ans=temp;
                            res=dp[i][j];
                        }
                           
                    }
            }
            
        }
        return ans;
    }
};