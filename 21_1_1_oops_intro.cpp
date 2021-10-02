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
    void printInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};


int main(){
    int n;
    cin >> n;
    student arr[n];
    for(int i=0 ; i < n ; i++){
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for(int i=0 ; i< n ; i++){
       arr[i].printInfo();
    }
    return 0;
}