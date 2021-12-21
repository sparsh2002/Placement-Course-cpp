#include <iostream>
#include <climits>
using namespace std;




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        maxNo = max(arr[i],maxNo);
        cout<< maxNo << " ";
    }
    
    return 0;
}