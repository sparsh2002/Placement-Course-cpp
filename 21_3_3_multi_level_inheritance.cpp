#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class A{
public:
    void funcA(){
        cout << "This is function A" << endl;
    }
};

class B : public A{
public:
    void funcB(){
        cout << "This is function B" << endl;
    }
};

class C:public B{

};

int main(){
    C c;
    c.funcA();
    c.funcB();
    return 0;
}