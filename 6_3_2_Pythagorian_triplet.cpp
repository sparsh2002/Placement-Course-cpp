#include <iostream>
using namespace std;

bool isPytha(int a, int b , int c){
    if(((a*a)+(b*b))==(c*c)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << isPytha(a,b,c) ;
    return 0;
}
