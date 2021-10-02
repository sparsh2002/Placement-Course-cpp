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

class B: public A{

};


int main(){
    B b;
    b.funcA();
    return 0;
}