#include <bits/stdc++.h>

using namespace std;

bool isPallindrome(string a){
	string b = a;
	reverse(b.begin() , b.end());
	return a==b;
}

bool solve(string s , bool flag){
	if(isPallindrome(s)) return flag;
	
	string next;
	
	
	int n = s.size();
	
	for(int i=1 ; i<n ; i++){
		next = s.substr(0 , i) + s.substr(i+1);
		if(isPallindrome(next)){
			string valid = s.substr(0 , i-1) + s.substr(i);
			return solve(valid , !flag);
		}
	}
	
	next = s.substr(1);
	return solve(next , !flag);
}

int main() {
	
	string s;
	cin >> s;
	
	bool flag = true;
	
	
	if(solve(s , flag)){
		cout << "First" << endl;
	}
	else{
		cout << "Second" << endl;
	}

	return 0;
}