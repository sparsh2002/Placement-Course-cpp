#include<iostream>
using namespace std;

// Common file
#include <ext/pb_ds/assoc_container.hpp>
// Including tree_order_statistics_node_update
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

// examples

void exmp(){
// Ordered set declared with name o_set
	ordered_set o_set;
  
	// insert function to insert in
	// ordered set same as SET STL
	o_set.insert(5);
	o_set.insert(1);
	o_set.insert(2);
  
	// Finding the second smallest element
	// in the set using * because
	//  find_by_order returns an iterator
	cout << *(o_set.find_by_order(1)) 
		 << endl;
  
	// Finding the number of elements
	// strictly less than k=4
	cout << o_set.order_of_key(4) 
		 << endl;
  
	// Finding the count of elements less 
	// than or equal to 4 i.e. strictly less
	// than 5 if integers are present
	cout << o_set.order_of_key(5) 
		 << endl;
  
	// Deleting 2 from the set if it exists
	if (o_set.find(2) != o_set.end())
		o_set.erase(o_set.find(2));
  
	// Now after deleting 2 from the set
	// Finding the second smallest element in the set
	cout << *(o_set.find_by_order(1)) 
		 << endl;
  
	// Finding the number of
	// elements strictly less than k=4
	cout << o_set.order_of_key(4) 
		 << endl;
}



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

const ll N = 10000000;
int MOD = 1000000007;

int fact[N+1];
int invfact[N+1];

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



int gcd(int a , int b){
	if(a==0){
		return b;
	}
	return gcd(b%a , a);
}



void init(){
	int p = MOD;
	fact[0] = 1;
	int i = 1;
	for(i=1 ; i<N ; i++){
		fact[i] = 1ll*i*fact[i-1]%p;
	}
	i--;
	invfact[i] = pw(fact[i] , p-2 , p);

	for(i-- ; i>=0 ; i--){
		invfact[i] = 1ll*invfact[i+1]*(i+1)%p;
	}
}

int nCr(int n , int r){
	if(r>n || n<0 || r<0) return 0;
	int res  = fact[n];
	res = 1ll*res*invfact[r]%MOD;
	res = 1ll*res*invfact[n-r]%MOD;
	return res;
}


ll a[N], tree[4*N];

void build(int node , int st , int en){
	if(st==en){
		tree[node] = a[st];
		return;
	}

	int mid = (st+en)/2;

	build(2*node , st , mid);
	build(2*node+1 , mid+1 , en);

	tree[node] =  min(tree[2*node] , tree[2*node+1]);
}


ll query(int node , int st , int en , int l , int r){
	if(r<st or l>en){
		return INT_MAX;
	}

	if(l<=st and en<=r){
		return tree[node];
	}

	int mid = (st+en)/2;
	return min(query(2*node , st, mid, l, r) , query(2*node+1 , mid+1 , en , l, r));

}

void update(int node , int st , int en , int idx , int val){
	if (st==en)
	{
		a[st] = val;
		tree[node] = val;
		return;
	}

	int mid = (st+en)/2;
	if(idx<=mid){
		update(2*node , st, mid , idx, val);
	}
	else{
		update(2*node+1 , mid+1, en , idx, val);
	}

	tree[node] = min(tree[2*node] , tree[2*node+1]);
	
}




int main(){
	cout <<"sparsh" << "\n";
	return 0;
}