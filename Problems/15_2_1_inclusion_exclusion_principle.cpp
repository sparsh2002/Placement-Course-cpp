#include <iostream>
using namespace std;

int divisibe(int n , int a , int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return (c1+c2-c3);
}

int main(){
    cout << divisibe(40, 5 ,7) << endl;
    return 0;
}