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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n1 , n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    int k , m;
    cin >> k >> m;
    for(int i=0 ; i<n1 ; i++){
        cin >> arr1[i];
    }

    for(int i=0 ; i<n2 ; i++){
        cin >> arr2[i];
    }

    vector<int> ans1;
    vector<int> ans2;
    for(int i=0 ; i<k; i++){
        ans1.push_back(arr1[i]);
    }

    for(int i=n2-m ; i<n2 ; i++){
        ans2.push_back(arr2[i]);
    }

    if(ans1[ans1.size()-1]>=ans2[0]){
        cout << "NO" << "\n";
    }

    else{
        cout << "YES" << "\n";
    }

    return 0;
}