class Solution {
public:
    unordered_map<string , bool> mp;
    bool solve(string a , string b){
        if(a.compare(b)==0){
            return true;
        }
        if(a.size()<=1){
            return false;
        }
        
        string key = a + " " + b;
        if(mp.find(key)!=mp.end()){
            return mp[key];
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
        mp[key] = flag;
        return  flag;
    }
    bool isScramble(string a, string b) {
        if(a.size()!=b.size()){
            return false;
        }
        if(a.size()==0 and b.size()==0){
            return true;
        }
        mp.clear();
        return solve(a ,  b);
    }
};