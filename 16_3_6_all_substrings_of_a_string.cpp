#include<iostream>
#include<string>
using namespace std;

void print(string name){
    cout << " " << endl;
    for(int i=0 ; i<name.length() ; i++){
        int j=i;
        int end = i;
        while(j<=end && end<name.length()){
            for(int k=i ; k<=end ; k++ ){
                cout << name[k];
            }
            cout << endl;
            j++;
            end++;
        }
    }
}

void subseq(string name, string ans){
    if(name.length()==0){
        cout << ans <<endl;
        return ;
    }
    char ch = name[0];
    string ros = name.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);

}

int main(){
    subseq("abc" ,"");
    return 0;
}