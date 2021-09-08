#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    else{
        return n*fact(n-1);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int a , b;
    cin >> a >>b ;
    cout << fact(a) << endl;
    cout << fact(b) << endl;
    
    return 0;
}