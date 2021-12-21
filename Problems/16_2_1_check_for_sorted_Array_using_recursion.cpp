#include<iostream>
using namespace std;

bool isSorted(int *arr , int n){
   if(n==1){
       return true;
   }
    return (arr[0]<arr[1] && isSorted(arr+1,n-1));
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n  ;i++){
        cin >> arr[i];
    }
    cout << isSorted(arr, n);
    return 0;
}