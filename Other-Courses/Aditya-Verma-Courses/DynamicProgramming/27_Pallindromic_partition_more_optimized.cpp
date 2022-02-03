class Solution {
public:
    int dp[2001][2001];
    bool isPalindrome(string &str, int i, int j)
    {
        while(i < j)
        {
            if(str[i] != str[j]) // if character is not same
                return false;
            i++;
            j--;
        }
        
        return true;
    }
    int solve(string &str, int i, int j)
    {
        if(i >= j) return 0;
        
        if(isPalindrome(str, i, j))
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int ans = INT_MAX;
        for(int k = i; k < j; k++)
        {
            // if substring of str in range [i, k] is a palindrome, then check the range[k+1, j]
            if(isPalindrome(str, i , k))
            {
				// cutting the string from i to k will take 1 cut and fromt k+1 to j will be returned by the function.
                 int temp_ans = 1 + solve(str, k+1, j); 
                 ans = min(ans, temp_ans);
            }
        }
        
        return dp[i][j] = ans;
    }
    
    int minCut(string s) {
        memset(dp, -1, sizeof(dp));
        return solve(s, 0, s.size()-1);
    }
};