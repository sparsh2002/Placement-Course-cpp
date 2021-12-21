#include<iostream>
using namespace std;

void printfibo(int n){
    int first=0;
    int second=1;
    int i =0;
    while(i <=n){
        cout << first << " ";
        int term = first;
        first = second;
        second = term+second;
        i++;
    }     
}
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n ;
    printfibo(n);
    cout << endl;
    fibo(n);
    return 0;
}