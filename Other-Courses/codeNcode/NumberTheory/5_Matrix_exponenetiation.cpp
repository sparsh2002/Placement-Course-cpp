#include <bits/stdc++.h>
using namespace std;
int n;
int mod=1000000007;
void mult(vector<vector<long long> > &a,vector<vector<long long> > b){
    if(a.size()==0){
        a=b;
        return;
    }
    vector<vector<long long> > c(n,vector<long long>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
                c[i][j]%=mod;
            }
        }
    }
    a=c;
}
void exp(vector<vector<long long> > &a,int m){
    vector<vector<long long> > c;
    while(m){
        if(m&1){
            mult(c,a);
        }
        mult(a,a);
        m>>=1;
    }
    a=c;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>n>>m;
        vector<vector<long long> > a(n,vector<long long>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        exp(a,m);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<' ';
            cout<<'\n';
        }
    }
    return 0;
    }