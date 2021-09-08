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
    int key;
    cin >> key;
    
    int r = 0;
    int c = m-1;
    bool flag = false;
    while(r<n && c>=0){
        if(arr[r][c]==key){
            flag = true;
            break;
        }
        if(arr[r][c]>key){
            c--;
        }else{
            r++;
        }
    }
    cout << flag << endl;
    return 0;
}