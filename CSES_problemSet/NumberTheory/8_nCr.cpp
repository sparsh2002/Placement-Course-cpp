#include<bits/stdc++.h>
using namespace std;
const int N = 10000000;
int fact[N] , invfact[N];
int PRIME = 1000000007;

int pw(int a , int b , int m){
    if(b==0){
        return 1;
    }

    if(b%2==0){
        int t = pw(a , b/2 , m);
        return (1ll * t * t%m);
    }
    
    int t = pw(a , (b-1)/2 , m);
    t = (1ll * t * t)%m;
    return (1ll*a*t%m);
}


void init(){
    int p = PRIME;
    fact[0] = 1;
    int i = 1;
    for(i=1 ; i<N ; i++){
        fact[i] = i*fact[i-1]%p;
    }
    i--;
    invfact[i] = pw(fact[i] , p-2 , p);

    for(i-- ; i>=0 ; i--){
        invfact[i] = invfact[i+1]*(i+1)%p;
    }
}

int nCr(int n , int r){
    if(r>n || n<0 || r<0) return 0;
    return fact[n]*invfact[r]%PRIME*invfact[n-r]%PRIME;
}

int main(){
    int n , r;
    cin >> n >> r;
    init();
    // cout << fact[2]  << " "  << invfact[2]<< "\n";
    cout << nCr(n , r);
    return 0;
}