#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

long long merge(int arr[], int l , int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int inv = 0;
    int a[n1];
    int b[n2];

    for(int i=0 ; i<n1 ; i++){
        a[i] = arr[l+i];
    }

    for(int i=0 ; i<n2 ; i++){
        b[i] = arr[mid+1+i];
    }
    int i=0;
    int j=0 ; 
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }else{
            arr[k] = b[j];
            inv += n1-i;
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;
    }

    return inv;

}


long long mergeSort(int arr[] , int l ,int r){
    int inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        inv += mergeSort(arr , l ,mid);
        inv += mergeSort(arr,mid+1 , r);
        inv +=merge(arr , l ,mid ,r);
    }
    return inv;
}

int main(){
    int arr[] ={3,2,1};
    int n =mergeSort(arr,0,2);
    cout << n <<endl;
    return 0;
}