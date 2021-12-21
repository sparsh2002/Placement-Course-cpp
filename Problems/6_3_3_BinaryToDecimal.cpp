#include <iostream>
#include <cmath>
using namespace std;

int digit(long int n){
    int ct=0;
    while(n>0){
        n = n/10;
        ct++;
    }
    return ct;
}

int BinaryToDecimal(long int b){
    int d = 0;
    int i=0;
    while(b>0){
        d = d + ((b%10)*pow(2,i));
        i++;
        b = b/10;
    }

    return d;
}

int main(){
    long int b;
    cin>>b;
    cout << BinaryToDecimal(b) ;

    return 0;
}