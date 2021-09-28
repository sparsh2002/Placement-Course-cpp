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

void DNFSort(int arr[] , int n){
    int low=0;
    int mid=0;
    int high = n-1;
    while(mid<high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr , mid , high);
            high--;
        }
    }
}

int main(){
    int arr[] ={1,0,2,1,1,0,2,1,1,2,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    DNFSort(arr , n);
    for(int i=0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}