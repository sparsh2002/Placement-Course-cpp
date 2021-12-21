#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool balance(string s){
    stack <char> st;
    if(s.length()%2!=0){
        return false;
    }
    for(int i=0 ; i< s.length() ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')' && st.top()!='('){
            return false;
        }
        else if(s[i]==']' && st.top()!='['){
            return false;
        }
        else if(s[i]=='}' && st.top()!='{'){
            return false;
        }else if(s[i] == ')' || s[i] == ']' || s[i]=='}'){
            if(!st.empty())st.pop();
        }
        else{
            return false;
        }
    }
    if(!st.empty()){
        return false;
    }

    return true;

}

int main(){
    string s;
    cin >> s;
    cout << balance(s) << endl;
    return 0;
}