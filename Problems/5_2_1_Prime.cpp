#include <iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;
    bool isPrime = true;
    for(int i = 2 ; i<=n/2 ; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    cout << isPrime <<  endl;

    return 0;
}