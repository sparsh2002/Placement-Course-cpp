#include<iostream>
using namespace std;

vector<int> primes;
bool arr[N+1];
void seive(){
	arr[0] = arr[1] = true;
	for (int i = 2; i * i < N; i++) {
		if (!arr[i]) {
			for (int j = i * i; j <= N; j += i)
				arr[j] = true;
		}
	}
	// comment this part if u need not to store the primes
	for(int i=2 ; i<N ; i++){
		if(!arr[i]) primes.push_back(i);
	}
	
}

int main(){
	cout <<"sparsh" << "\n";
	return 0;
}