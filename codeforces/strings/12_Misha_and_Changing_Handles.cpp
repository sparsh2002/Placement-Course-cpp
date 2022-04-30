#include<bits/stdc++.h>
// #include <cstdalign>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define rep(i,a,b) for(int i=a ; i<b ; i++)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);

// 5
// Misha ILoveCodeforces
// Vasya Petrov
// Petrov VasyaPetrov123
// ILoveCodeforces MikeMirzayanov
// Petya Ivanov

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<list<string> > arr;
    for(int i=0 ; i<n ; i++){
        string prev,curr;
        cin >> prev >> curr;
        if(arr.empty()){
            list<string> l;
            l.push_back(prev);
			l.push_back(curr);
            arr.push_back(l);
        }
        else{
            for(int j=0 ; j<arr.size() ; j++){
                list <string> temp = arr[j];
				// cout << temp.back() << "\n";
                if(temp.back()==prev){
					temp.push_back(curr);
					arr[j] = temp;
				}
				else{
					list<string> l;
					l.push_back(prev);
					l.push_back(curr);
					arr.push_back(l);
				}
            }
        }
    }
	// cout << arr.size() << "\n";
	// for(auto it:arr){
	// 	cout << it.front() << " " << it.back() << "\n";
	// }

    return 0;
}