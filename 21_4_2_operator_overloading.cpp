#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class Complex{
private:
    int real;
    int imag;
public:

    Complex(){

    }

    Complex(int r ,int i){
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &c){
        Complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }

    void Print(){
        cout << real << " +i" << imag << endl;
    }


};



int main(){
    Complex c1(12,7) , c2(4,3);
    Complex c3 = c1+c2;
    c3.Print();
    return 0;
}