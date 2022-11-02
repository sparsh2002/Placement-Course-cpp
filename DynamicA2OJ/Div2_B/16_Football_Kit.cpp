#include <bits/stdc++.h>

using namespace std;

int main() {
	int n ;
	cin >> n;
	vector<pair<int,int>> arr(n);
	
	unordered_map<int,int> home;
	unordered_map<int,int> away;
	
	for(int i=0 ; i<n ; i++){
		int x , y;
		cin >> x >> y;
		home[x]++;
		away[y]++;
		arr[i] = {x, y};
	}
	
	vector<pair<int,int>> ans(n);
	
	
	for(int i=0 ; i<n ; i++){
		cout << n-1+home[arr[i].second] << " "<<  n-1-home[arr[i].second] << endl;
	}

	return 0;
}