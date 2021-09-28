#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

void swap(int arr[] , int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void waveSort(int arr[] ,int n){
    int i=1;
    while(i<n){
        if(arr[i]<arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr, i , i+1);
        }
        i+=2;
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i< n ; i++){
        cin >> arr[i];
    }
    waveSort(arr,n);
    for(int i=0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}