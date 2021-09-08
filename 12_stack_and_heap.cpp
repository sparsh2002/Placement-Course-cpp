#include <iostream>
using namespace std;

int main(){

    int a = 10;
    cout << a << endl;
    int *p = new int();
    *p = 20;
    cout << p << endl;
    cout << *p << endl;
    delete(p);

    p = new int[4];
    for(int i=0; i<4 ;i++){
        *(p+i) = 3*i;
    }

    for(int i=0; i<4 ;i++){
        cout << *(p+i) << endl;
    }
    delete(p);
    p = NULL;
    return 0;
}