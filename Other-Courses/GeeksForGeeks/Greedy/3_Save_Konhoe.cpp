#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n,z;
	    cin >> n >> z;
	    vector<int> arr(n);
	    for(int i=0 ; i<n ; i++){
	        cin >> arr[i];
	    }
	    priority_queue<int> q;
	    for(int i=0 ; i<n ; i++){
	        q.push(arr[i]);
	    }
	    int ct = 0;
	    while(!q.empty() and z>0){
	        int top = q.top();
	        q.pop();
	        z -= top;
	        top = top/2;
	        if(top>0) q.push(top);
	        ct++;
	        if(z<=0){
                break;
            }
	    }
	    if(z>0){
	        cout << "Evacuate" << "\n";
	    }
	    else{
	        cout << ct << "\n";
	    }
	}
	return 0;
}
