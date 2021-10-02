#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class Myclass{
public:
    void func(){
        cout << "I am a function with no arguments" << endl;
    }
    void func(int a){
        cout << "I am a function with integer argument" << endl;
    }
    void func(double a){
        cout << "I am a function with double argument" << endl;
    }
};


int main(){
    Myclass obj;
    obj.func();
    obj.func(4);
    obj.func(5.123);
    obj.func();
    return 0;   
}