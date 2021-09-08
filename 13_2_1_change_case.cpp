#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toUpper(string s){
    for(int i=0 ; i<s.length() ; i++){
        if((int)s[i]>=97 && (int)s[i]<=122){
            int change = (int)s[i] - 32;
            s[i] = (char)change; 
        }
    }
    return s;
}

string toLower(string s){
    for(int i=0 ; i<s.length() ; i++){
        if((int)s[i]>=65 && (int)s[i]<=90){
            int change = (int)s[i] + 32;
            s[i] = (char)change; 
        }
    }
    return s;
}



int main(){
    string s;
    cin>> s;
    cout << toUpper(s) << endl;
    cout << toLower(s) << endl;
    cout << s << endl;
    transform(s.begin(),s.end(),s.begin() , ::toupper);
    cout << s << endl;
    transform(s.begin(),s.end(),s.begin() , ::tolower);
    cout << s << endl;
    return 0;
}