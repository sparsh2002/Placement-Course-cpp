#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }
    int maxNo = arr[0];
    int ans = 0;
    if(arr[0]>arr[1]){
        ans++;
    }
    for(int i=1 ; i<n-1 ; i++){
        if(arr[i]>maxNo  && arr[i]>arr[i+1]){
            maxNo = arr[i];
            ans++;
        }
    }
    if(arr[n-1]>maxNo){
        ans++;
    }
    cout << ans;
    
    return 0;
}