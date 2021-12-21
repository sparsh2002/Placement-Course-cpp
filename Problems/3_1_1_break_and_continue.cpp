#include <iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int i=0 ; i<n ;i++){
        if(i==5){
            break;
        }
        cout<<i <<" ";

    }
    cout << endl;
    for(int i=0 ; i<n ; i++){
        if(i==7){
            continue;
        }
        cout << i << " ";
    }
    
   
    return 0;
}