#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n1,n2,t,flag=0;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		for(int l=n1;l<=n2;l++){
			flag=0;
			for(int i=2;i<=sqrt(l);++i){
				if(l%i==0){
					flag=1;
					break;
				}
			}
			if(flag==0 && l!=1)
				cout<<l<<endl;
		}
		cout<<endl;
	}
	return 0;
}