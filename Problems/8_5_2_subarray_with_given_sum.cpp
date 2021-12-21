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
    int sum;
    cin >> sum;
    int s =0;
    int x[2] = {INT_MAX,INT_MAX};
    for(int i=0 ; i< n ; i++){
        s = 0;
        
        for(int j = i ; j<n ; j++){
            s = s + arr[j];
            if(s==sum){
                x[0] = i;
                x[1] = j;
                break;
            }
        }
    }
    // for(int i = x[0] ; i<=x[1] ; i++){
    //     cout << arr[i] << " ";
    // }
    if(x[0] != INT_MAX && x[1]!=INT_MAX){
        cout << x[0] << " " << x[1] << endl;
    }
    
    
    
    return 0;
}