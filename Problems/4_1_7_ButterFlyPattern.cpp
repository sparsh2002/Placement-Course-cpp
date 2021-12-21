#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
   int n;
   cin>>n;
   int printval = 1;
   for(int i=1 ; i<n+1 ; i++){
       for(int j=1 ;j<=i;j++ ){
           cout<<"*";

       }
       int space = 2*n - 2*i;
       for(int j=1 ; j<=space ; j++){
           cout<<" ";
       }
       for(int j=1 ;j<=i;j++ ){
           cout<<"*";

       }
       cout<<endl;
   }

   for(int i=n ; i>=1 ; i--){
       for(int j=1 ;j<=i;j++ ){
           cout<<"*";

       }
       int space = 2*n - 2*i;
       for(int j=1 ; j<=space ; j++){
           cout<<" ";
       }
       for(int j=1 ;j<=i;j++ ){
           cout<<"*";

       }
       cout<<endl;
   }
   
   return 0;
}
