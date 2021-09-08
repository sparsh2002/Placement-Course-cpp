#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a;
    char op;
    cin>>a ;
    cin>>op;
    int ans;
    switch (op)
    {
    case '~':
        ans = ~a;
        break;
    case '<':
        ans = a<<1;
        break;
    case '>':
        ans = a>>1;
        break;
    default:
        ans = 0;
        break;
    }
    cout << ans << endl;

   
    return 0;
}
