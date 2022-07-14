#include <bits/stdc++.h>
using namespace std;

bool cmp(const vector<int>&a , const vector<int>&b){
    if(((a[0]*a[1])/a[2]) == ((b[0]*b[1])/b[2])){
        return ((a[0]*a[1]) > (b[0]*b[1]));
    }
    return (((a[0]*a[1])/a[2]) > ((b[0]*b[1])/b[2]));
    // return (((a[0]*a[1])) > ((b[0]*b[1])));
}

int main() {
	int t;
    cin >> t;
	while(t--){
	    int n,w;
	    cin >> n >> w;
	    vector<vector<int> > arr(n , vector<int>(3));
	    for(int i=0 ; i<n ; i++){
	        int c,p,t;
	        cin >> c >> p >> t;
	        arr[i][0] = c;
	        arr[i][1] = p;
	        arr[i][2] = t;
	    }
	    
	    sort(arr.begin() , arr.end() , cmp);
	    // for(int i=0 ; i<n ; i++){
        //     cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << "\n";
        // }
	    int score = 0;
	    for(int i=0 ; i<n ; i++){
	        if(w<=0){
	            break;
	        }
	        else{
               int x = arr[i][2];
               if(x<=w){
                 score += arr[i][0]*arr[i][1];
                 w -= x;
               }
               
	        }
	    }
	    
	    cout << score << "\n";
	}
	return 0;
}
