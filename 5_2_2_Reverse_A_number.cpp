#include <iostream>
#include <cmath>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;
    int safe = n;
    int r = 0;
    int ct=0;
    // calculating the number of digits in the number first
    while(n>0){
        n = n/10;
        ct++;
    }
    // calculating the individual digits of the number and assigning it to the reverse number
    n = safe;
    int i=1;
    
    while(i<=ct){
        r = r + (n%10)*pow(10,ct-i);
        n = n/10;
        i++;
    }
    cout << r << endl;
    
    
    return 0;
}