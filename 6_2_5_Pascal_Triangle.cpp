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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    int n,r;
    cin>>n >> r;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ;j++){
            if(j<=i){
                int val = fact(i)/(fact(j)*fact(i-j));
                cout<< val << " " ;
            }
        }
        cout<< endl;
    }
    return 0;
}