#include<iostream>
#include<string>
using namespace std;

int maze(int s1 , int s2 , int e1 , int e2){
    if(s1==e1 && s2==e2){
        return 1;
    }
    if(s1>e1 || s2>e2){
        return 0;
    }
    int count = 0;
    for(int i=1 ; i<=6 ; i++){
        for(int j=1 ; j<=6 ; j++){
            count += maze(s1+i, s2+j , e1,e2);
        }
    }
    return count;
}

int main(){
    cout << maze(0,0,4,4) << endl;
    return 0;
}