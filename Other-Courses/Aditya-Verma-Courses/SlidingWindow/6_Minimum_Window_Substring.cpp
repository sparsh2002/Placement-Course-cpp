class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length())
            return "";
        
        unordered_map<char,int> req_count,curr_count;
        
        for(int i=0;i<t.length();i++)
          req_count[t[i]]++;
        
        int start=-1,end=-1;
        int min_len=INT_MAX;
        
        for(int i=0,j=0;j<s.length();j++)
        {
            curr_count[s[j]]++;
            while(curr_count[s[i]]>req_count[s[i]])
            {
                curr_count[s[i]]--;
                i++;
            }
            bool check=true;
            for(auto it:req_count)
            {
                if(curr_count[it.first]>=it.second)
                    continue;
                else{
                    check=false;
                    break;
                }
            }

            if(check&&((j-i+1)<min_len))
            {
                min_len=j-i+1;
                start=i;
                end=j;
            }
        }
        
      if(start==-1)
          return "";
      string ans="";
        for(int i=start;i<=end;i++)
            ans+=s[i];
      return ans;  
    }
};