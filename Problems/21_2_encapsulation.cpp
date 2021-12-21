#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class A{
public:
    int a;
    void funcA(){
        cout << "This is funcA" << endl;
    }
private:
    int b;
    void funcB(){
        cout << "This is funcB" << endl;
    }
protected:
    int c;
    void funcC(){
        cout << "This is funcC" << endl;
    }
};


int main(){
    A obj;
    obj.a = 3;
    obj.funcA();
    return 0;
}