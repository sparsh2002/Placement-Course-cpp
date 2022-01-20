class Solution {
public:
    vector<string> ans;
    void solve(string op , int open , int close){
        if(open==0){
            while(close!=0){
                op = op+ ")";
                close--;
            }
            ans.push_back(op);
            return;
        }
        else if(open==close){
            open--;
            op = op + "(";
            solve(op , open , close);
            return;
        }
        string op1 = op +"(";
        string op2 = op +")";
        solve(op1 , open-1 , close);
        solve(op2 , open , close-1);
        return ;
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        string op ="";
        solve(op , open , close);
        return ans;
    }
};