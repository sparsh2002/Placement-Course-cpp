#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

void countSort(int *arr , int n){
    int max = arr[0];
    // finding the maximum element in an array
    for(int i =0 ; i < n ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    // initialising count array
    max = max+1;
    int count[max];
    for(int i=0 ; i< max ; i++){
        count[i] = 0;
    }
    //counting the number of occurances of distinct elements
    for(int i=0 ;i<max ; i++){
        for(int j=0 ; j < n ; j++){
            if(arr[j]==i){
                count[i]= count[i] +1;
            }
        }
    }
    //getting commulative sum
    int currSum =0;
    for(int i=0 ; i< max ; i++){
        count[i] = count[i]+currSum;
        currSum = count[i];
    }   
    // initializing final sorted array
    int ans[n];
    for(int i=0 ; i< n ; i++){
        ans[i] = 0;
    }
    // making final sorted array
    for(int i=n-1 ;i>=0 ; i--){
        int idx = count[arr[i]] -1;
        count[arr[i]] = count[arr[i]] -1;
        ans[idx] = arr[i];
    }
    // printing the array
    for(int i=0 ; i< n ; i++){
        cout << ans[i] << " ";
    }
    
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i< n ; i++){
        cin >> arr[i];
    }
    countSort(arr, n);
    return 0;
}