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

bool ispowerof2(int n){
    return (n && ! (n & n-1));
}

int main(){
    int n;
    cin >> n;
    cout << ispowerof2(n) << endl;
    
    return 0;
}