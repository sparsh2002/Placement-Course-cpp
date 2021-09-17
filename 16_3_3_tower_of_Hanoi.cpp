#include<iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerofHanoi(n-1,helper,dest,src);
}

int main(){
    int n;
    char src,dest,helper;
    cin >> n;
    cin >> src >> helper >> dest ;
    towerofHanoi(n,src,dest,helper);
    return n;
}