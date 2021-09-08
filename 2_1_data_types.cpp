#include <iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    int a; //initialization
    a = 12 ; //declaration
    cout << "Size of Integer is :" << sizeof(a) << endl;
    float b;
    b = 2.4;
    cout << "Size of Float is :" << sizeof(b) << endl;
    cout << "Size of char is: " << sizeof(char) << endl;
    cout << "Size of bool is: " << sizeof(bool) << endl;

    short int si;
    long int li;
    cout << "Size of short int is: " << sizeof(si) << endl;
    cout << "Size of long int is: " << sizeof(li) << endl;
    return 0;
}