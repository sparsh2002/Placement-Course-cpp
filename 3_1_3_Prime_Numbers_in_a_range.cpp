#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1 || n==2){
        return true;
    }else{
        for(int i =2 ; i<=n/2 ; i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b;
    cin>>a >>b;
    for(int i =a ; i<b+1 ; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
   
    return 0;
}