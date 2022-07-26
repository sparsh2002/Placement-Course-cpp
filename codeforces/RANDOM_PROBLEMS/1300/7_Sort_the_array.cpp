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
#define sort_v(arr) sort(arr.begin() , arr.end());
#define max_el(arr) *max_element(arr.begin() , arr.end());
#define min_el(arr) *min_element(arr.begin() , arr.end());
#define sort_vr(arr) sort(arr.rbegin() , arr.rend());
#define read(arr , n) rep(i , 0 , n) cin >> arr[i]; 
#define print_v(arr , n) rep(i , 0 , n) cout << arr[i] << ' '; 
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi arr(n);
    read(arr , n);
    if(is_sorted(arr.begin() , arr.end())){
        cout << "yes" << "\n";
        cout << "1 1";
        return 0;
    }

    int i=0 ; 
    int start = 1 , end = 1;
    while(i<n-1){
        if(arr[i]>arr[i+1]){
            int j = i+1;
            while(j<n and  arr[i]>arr[j]){
                j++;
            }
            start= i+1;
            end = j;
            reverse(arr.begin()+i , arr.begin()+j);
            break;
        }
        else{
            i++;
        }
    }

    if(is_sorted(arr.begin() , arr.end())){
        cout << "yes" << "\n";
        cout << start << " " <<  end << "\n";
    }
    else{
        cout << "no" << "\n";
    }

    return 0;
}