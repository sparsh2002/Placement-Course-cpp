#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class base{
public:
    virtual void print(){
        cout << "print function of base class"<< endl;
    }
    void display(){
        cout << "display functio of base class" << endl;
    }

};

class derived: public base{
public:
    void print(){
        cout << "print function of derived class"<< endl;
    }
    void display(){
        cout << "display functio of derived class" << endl;
    }
};


int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->print();
    baseptr->display();
    return 0;
}