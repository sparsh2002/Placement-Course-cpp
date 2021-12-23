#include<bits/stdc++.h>
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

void findNextLetter(char  arr[] , int n , int key){
    int low =0 , high = n-1;
    char res;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            low = mid+1;
        }
        else if(key < arr[mid]){
            res = arr[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout << res << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    char arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    char key;
    cin >> key;
    findNextLetter(arr , n , key);
    return 0;
}