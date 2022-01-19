class Solution {
public:
    vector<string> ans;
    bool isChar(char ch){
        if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            return true;
        }
        return false;
    }
    void solve(string ip , string op){
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        char ch = ip[0];
        if(isChar(ch)){
            if(islower(ch)){
                string op1 = op + ch;
                char ch1 = toupper(ch);
                string op2 = op + ch1 ;
                ip.erase(ip.begin());
                solve(ip , op1);
                solve(ip , op2);
            }
            else{
                string op1 = op+ ch;
                char ch1 = tolower(ch);
                string op2 = op+ ch1;
                ip.erase(ip.begin());
                solve(ip , op1);
                solve(ip , op2);
            }
        }
        else{
            op += ip[0];
            ip.erase(ip.begin());
            solve(ip , op);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        string ip = s;
        string op ="";
        solve(ip,op);
        return ans;
    }
};