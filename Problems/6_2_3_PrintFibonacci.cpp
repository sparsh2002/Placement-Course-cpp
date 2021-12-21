#include <iostream>
#include <cmath>
using namespace std;

void printFibo(int n){
    int first = 0;
    int second = 1;
    for(int i=0 ; i<n ; i++){
        if(i==0){
            cout << 0 << " ";
        }
        else if(i==1){
            cout << 1 << " ";
        }else{
            int term = first + second;
            cout << term << " ";
            first = second;
            second = term;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;
    printFibo(n);
    return 0;
}