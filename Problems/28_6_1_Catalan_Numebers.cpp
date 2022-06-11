class Solution {
public:
    // implementation of catalan numbers
    unordered_map<int,int> mp;
    int numTrees(int n) {
        if(mp.find(n)!=mp.end()) return mp[n];
        if(n<=1) return 1;
        int res = 0;
        for(int i=0; i<n ; i++){
            res += numTrees(i)*numTrees(n-i-1);
        }
        return mp[n] = res;
    }
};