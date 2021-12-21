#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b;
    char op;
    cin>>a >>b ;
    cin>>op;
    int ans;
    switch (op)
    {
    case '&':
        ans = a&b;
        break;
    case '|':
        ans = a|b;
        break;
    case '^':
        ans = a^b;
        break;
    default:
        ans = 0;
        break;
    }
    cout << ans << endl;

   
    return 0;
}
