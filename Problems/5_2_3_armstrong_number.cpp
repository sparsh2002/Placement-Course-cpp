#include <iostream>
#include <cmath>
using namespace std;

int digit(int n){
    int ct=0;
    while(n>0){
        n = n/10;
        ct++;
    }
    return ct;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;
    int safe = n;
    int d = digit(n);
    int sum = 0;
    int i = 0;
    while(i<=d){
        sum = sum + pow(n%10,3);
        n = n/10;
        i++;
    }
    if(sum==safe){
        cout<<"armstrong"<<endl;
    }else{
        cout<<"not an armstrong number" << endl;
    }
    
    return 0;
}