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
    
    int row_start=0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;

    while(row_start<=row_end || column_start<=column_end){
        for(int j =column_start ; j<=column_end ; j++){
            cout << arr[row_start][j] << " ";
        }
       row_start++;
        for(int i=row_start ; i<=row_end ; i++){
            cout << arr[i][column_end] << " ";
        }
       column_end--;
        for(int j = column_end ; j>=column_start ; j--){
            cout << arr[row_end][j] << " ";
        }
        row_end --;
        for(int i = row_end ; i>=row_start ; i--){
            cout << arr[i][column_start] <<" ";
        }
        column_start++;
        
    }
    return 0;
}