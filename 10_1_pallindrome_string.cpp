#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool ispal = true;
    for(int i= 0 ;i<n/2 ;i++){
        if(arr[i]!=arr[n-1-i]){
            ispal = false;
            break;
        }
    }
    cout << ispal << endl;
    return 0;
}