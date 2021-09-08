#include <iostream>
#include <climits>
#include <string>
using namespace std;


int main(){
    int n,m;
    cin>>n >>m;
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> arr[i][j];
        }
    }
    
   for(int i =0 ;i<  n ; i++){
       for(int j=0 ;j<m ; j++){
           if(i!=j && i<j){
               int temp = arr[i][j];
               arr[i][j] = arr[j][i];
               arr[j][i] = temp;
           }
       }
   }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl ; 
    }
   
    return 0;
}