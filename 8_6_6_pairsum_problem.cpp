#include <iostream>
#include <climits>
#include <string>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    string ans = "False";
    for(int i= 0 ; i<n-1 ;i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==k){
                ans = "True";
                break;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}