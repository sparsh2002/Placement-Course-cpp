#include <iostream>
using namespace std;

int main(){
	cout << "Hello World"  << "\n";
	int n;
	cin >> n;
	cout << n << "\n";
	int arr[] = {3,4,1,4,5};
	for(auto x:arr){
		cout << x << "\n";
	}
}