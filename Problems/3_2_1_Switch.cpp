#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    switch(n){
        case 0:
            cout<<"Sunday";
            break;
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        default:
            cout<< "Sunday";
    }

   
    return 0;
}
