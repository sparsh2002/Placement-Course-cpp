#include <iostream>
#include <climits>
#include <string>
using namespace std;

// applicable for sorted array, if not sorted than sort it first then apply the algorithm

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
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            ans = "True";
            break;
        }
        else if(arr[low]+arr[high]<k){
            low = low+1;
        }else{
            high = high-1;
        }
    }
    cout << ans << endl;
    
    return 0;
}