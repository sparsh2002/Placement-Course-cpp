#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int n){
    int oct =0;
    int i=0;
    while(n>0){
        oct = oct + (n%10)*pow(8,i);
        n = n/10;
        i++;
    }
    return oct;
}

int main(){
    int n;
    cin>>n;
    cout << octalToDecimal(n);

    return 0;
}