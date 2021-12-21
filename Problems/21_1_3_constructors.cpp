#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class student{
public:
    string name;
    int age;
    bool gender;

    student(){
        cout << "Default Constructor" << endl;
    }   // defualt constructor

    student(string s , int a , bool g){
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }   // parameterized constructor

    student (student &a){
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout << "Destructor Called" << endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender ==a.gender){
            return true;
        }
        return false;
    }

};

int main(){
    student a("Sparsh",18,0);
    // cout << a.name << endl;
    // cout << a.age << endl;
    // cout << a.gender << endl;

    student b;
    student c = a;
    if(c==a){
        cout << "Same" << endl;
    }else{
        cout <<"Not Same" << endl;
    }
    return 0;
}