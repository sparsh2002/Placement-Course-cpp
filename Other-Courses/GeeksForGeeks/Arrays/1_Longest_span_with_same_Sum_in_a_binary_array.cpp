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


int bruteforce(int *arr1 , int *arr2 , int n){
    int maxLen = 0;
    for(int i=0 ; i<n ; i++){
        int sum1 = 0 ,sum2=0;
        for(int j=i ; j<n ; j++){
            sum1 += arr1[j];
            sum2 += arr2[j];
            if(sum1==sum2){
                int len = j-i+1;
                if(len >maxLen){
                    maxLen = len;
                }
            }
        }
        
    }
    return maxLen;
}

void  optimized(int * arr1 , int * arr2 , int n){
    int cum1 = arr1[0] , cum2 = arr2[0];
    int diff[n];
    for(int i=1 ; i<n ; i++){
        arr1[i]  += cum1;
        cum1 = arr1[i];
        arr2[i] += cum2;
        cum2 = arr2[i];
    }

    for(int i=0 ; i<n ; i++){
        cout << arr1[i] << " ";
    }
    cout << "\n";
    for(int i=0 ; i<n ; i++){
        cout << arr2[i] << " ";
    }
     cout << "\n";
    for(int i=0 ; i<n ; i++){
        diff[i] = arr1[i]-arr2[i];
    }
    for(int i=0 ; i<n ; i++){
        cout << diff[i] << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<n ; i++){
        cin >> arr2[i];
    }

    cout << bruteforce(arr1 , arr2 , n) << "\n";
    // optimized(arr1 , arr2 , n);
    return 0;
}