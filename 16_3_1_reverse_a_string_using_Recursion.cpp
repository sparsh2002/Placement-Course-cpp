#include<iostream>
#include<string>
using namespace std;

void reverse(string name,int start , int n){
    if(start==n-1){
        cout << name[start];
        return;
    }
    reverse(name,start+1 , n);
    cout << name[start];
    
}

int main(){
    string name;
    cin>> name;
    int n = name.length();
    reverse(name,0 , n);
    return 0;
}