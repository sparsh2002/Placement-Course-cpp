#include <iostream>
#include <climits>
using namespace std;

int* bubbleSort(int* arr, int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    bubbleSort(arr,n);
    for(int i=0 ; i<n ;i++){
        cout <<arr[i] << " ";
    }
    
    return 0;
}