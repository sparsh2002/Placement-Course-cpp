
#include <iostream> 
#include <cstdio> 
#include <algorithm> 
#include <cmath>
using namespace std; 
int main () {    
    //freopen ("D://imput.txt", "R", stdin);    
    int a, b, c, x, y, z, temp1, temp2;    
    while (cin >> a >> b >> c) 
    {        
        temp1 = a + b + c;        
        temp2 = b-a + c;        
        if (temp1 & 1) {            
            cout << "Impossible" << endl;            
            continue;       
        }        
        if (temp2 & 1) {            
            cout << "Impossible" << endl;            
            continue;        
        }        
        x = a-(z = c-(y = temp2/2));        
        if (x < 0 || y < 0 || z< 0) {            
            cout << "Impossible" << endl;            
            continue;        
        }        
        cout << x<< " "<< y <<" "<< z << endl;   
    }    
    return 0;
}
