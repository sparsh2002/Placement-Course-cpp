#include<iostream>
#include<string>
using namespace std;

string replacepi(string name,  int i){
    if(i>name.length()){
        return name;
    }
    if(name[i]=='i' && name[i-1]=='p'){
        name.replace(i-1,1,"3.14");
        name.replace(i+3,1,"");
        return replacepi(name,i+3);
    }else{
        return replacepi(name,i+1);
    }
    
}

int main(){
    string name;
    cin >> name;
    cout << replacepi(name,1) << endl;
    return 0;
}