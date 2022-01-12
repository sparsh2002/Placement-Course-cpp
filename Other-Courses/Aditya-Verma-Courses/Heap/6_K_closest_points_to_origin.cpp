class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int ,pair<int,int >>> q;
        for(int i=0 ; i<arr.size() ; i++){
            q.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1] , {arr[i][0] , arr[i][1]}});
            if(q.size()>k){
                q.pop();
            }
        }
        while(!q.empty()){
            vector<int> temp(2);
            temp[0] = q.top().second.first;
            temp[1] = q.top().second.second;
            ans.push_back(temp);
            q.pop();
        }
        return ans;
    }
};