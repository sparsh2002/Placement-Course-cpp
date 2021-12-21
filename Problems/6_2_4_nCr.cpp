#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1;
    else{
        return n*fact(n-1);
    }
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n,r;
    cin>>n >> r;
    int nCr = fact(n)/(fact(r)*fact(n-r));
    cout << nCr << endl;
    return 0;
}