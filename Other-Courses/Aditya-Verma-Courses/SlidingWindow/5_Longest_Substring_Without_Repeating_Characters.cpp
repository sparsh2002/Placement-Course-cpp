class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx =0 , i=0 , j=0 , n = s.size();
        unordered_map <char,int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp[s[j]]<1){
                j++;
            }
            else if(mp[s[j]]==1){
                mx = max(mx , j-i+1);
                j++;
            }
            else if(mp[s[j]]>1){
                while(mp[s[j]]>1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return mx;
    }
};