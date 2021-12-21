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
   for(int i=1  ; i<n+1 ; i++){
       for(int j=1 ; j<n+1 ; j++){
           if(j<=i){
               cout<< printval<<" ";
               printval++;
           }
       }
       cout<< endl;
   }
   
   return 0;
}
