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
    const int N = 1e6+2;
    bool check[N];
    for(int i=0 ; i< N; i++){
        check[i] = false;
    }
    for(int i= 0 ; i< n ; i++){
        if(arr[i]>=0){
            check[arr[i]] = true;
        }
    }

    for(int i=0 ; i<n ; i++){
        if(check[i]==false){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}