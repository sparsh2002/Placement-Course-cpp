#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    int pd =  arr[1] - arr[0];
    int curr = 2 ;
    int ans = 2;
    // for(int i=2 ; i<n ; i++){
    //     if(pd==arr[i+1]-arr[i]){
    //         curr++;
    //     }else{
    //         pd = arr[i+1] - arr[i];
    //         curr = 2;
    //     }
    //     ans = max(ans,curr);
        
    // }
    int j=2;
    while(j<n){ 
        if(pd==arr[j+1]-arr[j]){
            curr++;
        }else{
            pd = arr[j+1] - arr[j];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout << ans ;

    return 0;
}