#include<iostream>
using namespace std;

int first(int arr[], int n ,int key,int ct){
    if(key==n){
        return -1;
    }
    if(arr[0]==key ){
        return ct;
    }
    return first(arr+1, n-1 ,key,ct+1);
}

int last(int arr[], int n ,int key,int ct){
    if(ct==n){
        return -1;
    }
    int rest = last(arr,n, key,ct+1);
    if(rest!=-1){
        return rest ;
    }
    if(arr[ct]==key ){
        return ct;
    }
    return -1;
    
}




void search(int arr[] , int n , int key){
    cout << first(arr,n , key,0) << " ";
    cout << last(arr,n , key,0) << " ";
    
}

int main(){
    int arr[] = {4,2,1,2,5,2,7};
    search(arr,7,2);
    return 0;
}