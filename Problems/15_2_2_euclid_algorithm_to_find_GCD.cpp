#include<iostream>
using namespace std;

int GCD(int a , int b){
    int smaller = b;
    int greater = a;
    if(b>a){
        smaller = a;
        greater = b;
    }
    int gcd = greater%smaller;
    if(gcd==0){
        return smaller;
    }
    while(greater%smaller!=0){
        gcd = greater%smaller;
        greater = smaller;
        smaller = gcd;

    }
    return gcd;
}

int main(){
    int a,b;
    cin >>a >>b;
    cout << GCD(a,b) << endl;
    return 0;
}