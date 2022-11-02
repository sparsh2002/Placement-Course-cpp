#include <bits/stdc++.h>

using namespace std;


int main() {
	
	string s;
	cin >> s;
	
	int n = s.size();

    int odd = 0;

    vector<int> v(26 , 0);

    for(int i=0 ; i<n ; i++){
        v[s[i]-'a']++;
    }

    int m = v.size();
    for(int i=0 ; i<m ; i++){
        if(v[i]%2==1)odd++;
    }


    if(odd==0 or odd==1){
        cout << "First" << "\n";
        return 0;
    }

    if(odd%2==0){
        cout << "Second" <<"\n";
        return 0;
    }

    cout << "First" << "\n";

	return 0;
}