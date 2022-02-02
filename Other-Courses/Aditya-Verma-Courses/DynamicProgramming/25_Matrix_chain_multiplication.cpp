class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0 ; i<n ; i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> q;
        for(auto it:mp){
            q.push({it.second , it.first});
        }
        string ans = "";
        while(!q.empty()){
            int ct = q.top().first;
            while(ct--){
                ans += q.top().second;
            }
            q.pop();
        }
        return ans;
    }
};