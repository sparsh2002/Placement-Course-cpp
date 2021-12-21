#include<bits/stdc++.h>
using namespace std;

// samajh nahi aya but m try karunga

int* sliding_window_maximum(int * nums , int n , int k){
    int * res = new int[n-k+1];
    deque <int> window;
    for(int i=0 ; i<n ; i++){
        while (window.size()>0 and window.front() <= i-k)
        {
            /* code */
        }
        
    }
    return res;
}

int main(){
    int nums[] = {1,3,-1,-3,5,3,6,7};
    int * ans = sliding_window_maximum(nums , 8 , 3);
    for(int i=0 ; i< 8 ; i++){
        cout << ans[i] << " ";
    }
    return 0;
}