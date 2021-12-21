#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int a,b;
    cin >> a >> b;
    for(int i = 0 ; i<  a ; i++){
        for(int j= 0 ; j<b ; j++){
            if(i==0 || j==0 || j==b-1 || i==a-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout << endl;
    }

   
    return 0;
}
