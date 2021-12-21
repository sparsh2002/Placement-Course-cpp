#include<iostream>
#include<string>
using namespace std;

void subseq(string name, string ans){
    if(name.length()==0){
        cout << ans <<endl;
        return ;
    }
    char ch = name[0];
    int code = ch;
    string ros = name.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));
}



int main(){
     subseq("AB","");
    return 0;
}