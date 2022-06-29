#include<bits/stdc++.h>
using namespace std;
string printlcs(string a, string b)
{
	int n = a.size() , m = b.size();
    vector<vector<int> > dp(n+1 , vector<int>(m+1 , -1));
    
    for(int i=0 ; i<n+1 ; i++){
        for(int j=0 ; j<m+1 ; j++){
            if(i==0 or j==0){
                dp[i][j] = 0;
            }
        }
    }
    
    for(int i=1 ; i<n+1 ; i++){
        for(int j=1 ; j<m+1 ; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    
    string ans = "";
    int i=n , j = m;

    while(i>0 and j>0){
        if(a[i-1]==b[j-1]){
            ans += a[i-1];
            i--;
            j--;
        }
        else {
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << printlcs(a , b);
    return 0;
}