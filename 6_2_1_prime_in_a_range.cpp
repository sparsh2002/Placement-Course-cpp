#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    bool ans = true;
    for(int i = 2 ; i<=n/2 ; i++){
        if(n%i==0){
            ans = false;
            break;
        }
    }
    return ans;
}


void printPrime(int a , int b){
    for(int i=a ; i<b+1 ; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int a , b;
    cin >> a >>b ;
    printPrime(a,b);
    return 0;
}