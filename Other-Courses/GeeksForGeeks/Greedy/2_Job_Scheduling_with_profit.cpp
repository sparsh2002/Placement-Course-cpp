class Solution {
public:
    static bool cmp(vector<int>&a , vector<int>&b){
        return a[1]<b[1];
    }
    
    
    // sorting + brute force:  O(nlogn) + O(n^2) =  O(n^2) : worst case
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
        int n = s.size();
        vector<vector<int>> arr(n , vector<int>(3));
        for(int i=0 ; i<n ; i++){
            arr[i][0] = s[i]; // start time
            arr[i][1] = e[i]; // endtime
            arr[i][2] = p[i]; // profit
        }
        sort(arr.begin() , arr.end() , cmp);
        vector<int> tot(n , 0);
        tot[0] = arr[0][2];
        for(int i=1 ; i<n ; i++){
            int end = arr[i][0]; // start time of current activity
            int c1 = tot[i-1]; 
            int c2 = arr[i][2];
            for(int j=i-1 ; j>=0 ; j--){
                if(arr[j][1]<=end){
                    c2 += tot[j];
                    break;
                }
            }
            tot[i] = max(c1,c2);
        }
        return tot[n-1];
    }
};