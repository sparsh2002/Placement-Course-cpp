class Solution {
public:
    int t[51][51];
    int solve(vector<int> & arr , int i , int j){
        if(i>=j){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int mn = INT_MAX;
        for(int k = i ; k<j ; k++){
            int temp = solve(arr , i , k)+solve(arr ,k+1 , j) + arr[i-1]*arr[k]*arr[j];
            mn = min(mn , temp);
        }
        
        return t[i][j] = mn;
    }
    int minScoreTriangulation(vector<int>& arr) {
        memset(t , -1 ,sizeof(t));
        int ans = solve(arr , 1 , arr.size()-1);
        return ans;
    }
};