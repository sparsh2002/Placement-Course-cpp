#include <iostream>
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

int binaryOnes(int n){
    int ct = 0;
    while(n>0){
        ct = ct + getBit(n,0);
        n = n/2;
    }
    return ct;
}

int binaryOnesAlter(int n){
    int ct = 0;
    while(n>0){
        n = n & n-1;
        ct++; 
    }
    return ct;
}

int main(){
    int n;
    cin >>n;
    // cout << binaryOnes(n) << endl;
    cout << binaryOnesAlter(n) << endl;
    return 0;
}