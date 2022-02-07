class Solution {
public:
    bool solve(string a , string b){
        if(a.compare(b)==0){
            return true;
        }
        if(a.size()<=1){
            return false;
        }
        
        int n = a.size();
        
        bool flag = false;
        
        for(int i=1 ; i<=n-1 ; i++){
            if((solve(a.substr(0,i) , b.substr(n-i , i)) and 
               solve(a.substr(i,n-1) , b.substr(0 , n-i)))
                or
                (solve(a.substr(0,i) , b.substr(0 , i)) and 
               solve(a.substr(i,n-i) , b.substr(i , n-i))))
            {
                flag = true;
                break;
            }
        }
        
        return flag;
    }
    bool isScramble(string a, string b) {
        if(a.size()!=b.size()){
            return false;
        }
        if(a.size()==0 and b.size()==0){
            return true;
        }
        
        return solve(a ,  b);
    }
};