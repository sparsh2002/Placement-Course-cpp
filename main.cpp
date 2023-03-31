#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    int ct = 1;
	    string ans = "";
	    
	   abbbbccdddddd
        
	    for(int i=1 ; i<n ; i++){
	        if(s[i]==s[i-1]){
	            ct++;
	        }
	        else{
	            if(ct%2==0){
	                ans += s[i-1];
	                ans += s[i-1];
	            }
	            else{
	                ans += s[i-1];
	                
	            }
	            ct = 1;
	        }
	    }

	    if(ct%2==0){
	       ans += s[n-1];
           ans += s[n-1];
	   }
	   else{
	       ans += s[n-1];
	       
	   }
	    
	    cout << ans << "\n";
	}
	return 0;
}




