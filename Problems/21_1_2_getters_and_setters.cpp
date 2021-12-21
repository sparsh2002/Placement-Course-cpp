#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class student{
private:
    string name;
public:
    int age;
    bool gender;
    void setName(string na){
        name = na;
    }
    string getName(){
        return name;
    }
};


int main(){
    student a;
    a.setName("Sparsh");
    a.age = 18;
    a.gender = 0;
    cout << a.getName() << endl;
    cout << a.age << endl;
    cout << a.gender << endl;
    return 0;
}