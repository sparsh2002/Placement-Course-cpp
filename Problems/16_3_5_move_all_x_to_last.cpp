#include<iostream>
#include<string>
using namespace std;

string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){
    string name;
    cin >> name;
    cout << moveallX(name) << endl;
    return 0;
}