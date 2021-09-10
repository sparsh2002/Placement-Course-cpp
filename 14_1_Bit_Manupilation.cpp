#include<iostream>
using namespace std;

int getBit(int n , int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n , int pos){
    return (n|(1<<pos));
}

int clearBit(int n , int pos){
    return (n& (~(1<<pos)));
}

int updateBit(int n , int pos , int key){
    if(key==1){
        return (n|(1<<pos));
    }else{
        return (n& (~(1<<pos)));
    }
}

int main(){
    cout << getBit(5, 2) << endl;
    cout << getBit(8,2) << endl;
    cout << setBit(5,1) << endl;
    cout << setBit(5,2) << endl;
    cout << clearBit(5,2) << endl;
    cout << clearBit(13,2) << endl;
    cout << updateBit(5,1,1) << endl;
    cout <<updateBit(7,1,0) << endl;
    return 0;
}