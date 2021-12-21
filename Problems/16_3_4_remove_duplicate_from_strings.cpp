#include<iostream>
#include<string>
using namespace std;

string duplicate(string name,int i){
    if(i==name.length()-1){
        return name;
    }
    if(name[i]==name[i+1]){
        name.replace(i,1,"");
        return duplicate(name,i);
    }
    else{
        return duplicate(name,i+1);
    }
    

}

int main(){
    string name;
    cin>>name;
    cout << duplicate(name,0) << endl;

    return 0;
}