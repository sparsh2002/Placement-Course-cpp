#include<iostream>
using namespace std;

void printdsc(int n){
    if(n==1){
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    printdsc(n-1);
}


void printasc(int n){
    if(n==1){
        cout << 1 << " ";
        return;
    }
    printasc(n-1);
    cout << n << " ";
}


int main(){
    int n;
    cin>>n;
    printdsc(n);
    cout << endl;
    printasc(n);
    return 0;
}