#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main(){
    string s;
    cin>> s;
    // sort(s.begin(),s.end());
    // reverse(s.begin(),s.end());
    sort(s.begin() , s.end() , greater<int>());
    int x = stoi(s);
    cout << x << endl;
    return 0;
}