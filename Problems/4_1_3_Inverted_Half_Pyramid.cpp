#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
   int n;
   cin>>n;
   for(int i=0 ; i<n ; i++){
       for(int j = n-1 ;j>i-1 ;j-- ){
           cout<<"* ";
       }
       cout << endl;
   }

   
    return 0;
}
