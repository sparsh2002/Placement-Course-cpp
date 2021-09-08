#include <iostream>
#include <cmath>
using namespace std;

int sum(int n){
    int sum = 0;
    int cur = 1;
    for(int i=1 ;  i<=n ; i++){
        sum = sum + cur;
        cur++;
    }
    return sum;
}

int sumFormulae(int n){
    int sum = (n*(n+1))/2;
    return sum;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    int n;
    cin >> n ;
    // cout << sum(n) << endl;
    cout << sumFormulae(n) << endl;
    return 0;
}