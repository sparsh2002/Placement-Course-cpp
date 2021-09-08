#include <iostream>
#include <climits>
#include <string>
using namespace std;


int main(){
    int n1,n2 , n3;
    cin>>n1 >>n2 >> n3;
    int mat1[n1][n2];
    for(int i=0 ; i<n1 ; i++){
        for(int j=0 ; j<n2 ; j++){
            cin >> mat1[i][j];
        }
    }

    int mat2[n2][n3];
    for(int i=0 ; i<n2 ; i++){
        for(int j=0 ; j<n3 ; j++){
            cin >> mat2[i][j];
        }
    }   
   
   int ans[n1][n3];
   for(int i=0 ; i<n1 ; i++){
       for(int j=0 ; j<n3 ; j++){
           ans[i][j] =0;
       }
   }
   
   for(int i=0 ; i<n1 ; i++){
       for(int j=0 ; j<n3 ; j++){
           for(int k = 0 ; k<n2 ; k++){
               ans[i][j] += mat1[i][k]*mat2[k][j];
           }
       }
   }




   for(int i=0 ; i<n1 ; i++){
       for(int j=0 ; j<n3 ; j++){
           cout << ans[i][j] << " ";
       }
       cout << endl;
   }
   
    return 0;
}