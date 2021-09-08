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
        cout<<i <<" ";
    }
    cout << endl;
    int i=0;
    while(i<12){
        cout<< i << " ";
        i++;
    }
   
    return 0;
}