#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int digit(int n){
    int ct=0;
    while(n>0){
        n = n/10;
        ct++;
    }
    return ct;
}

string DecimalToBinary(int n){
    string b;
    b = "";
    while(n>0){
        b = b + to_string(n%2);
        n = n/2;
    }
    return b;
}

int main(){
    long int b;
    cin>>b;
    cout << DecimalToBinary(b);

    return 0;
}