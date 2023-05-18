#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
    int x1,y1, x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(!(x1==x2 or y1==y2 or (abs(x1-x2)==abs(y1-y2)))){
        cout << -1 << "\n";
    }
    else{
        if(x1==x2){
            cout << x1 + abs(y1-y2)<< " " << y1 << " "<< x2 + abs(y1-y2) <<  " " << y2  <<"\n";
        }
        else if(y1==y2){
            cout << x1 << " " << y1  + abs(x1-x2)<< " "<< x2 <<  " " << y2 + abs(x1-x2) <<"\n";
        }
        else{
            int y31= y1  + abs(x1-x2);
            int y41 = y2 - abs(x1-x2);
            int y32 = y1 - abs(x1-x2);
            int y42 = y2 + abs(x1-x2);
            
            if(y31==y2 and y41==y1){
                cout << x1 << " " << y31<< " "<< x2 <<  " " << y41 <<"\n";
            }
            else{
                cout << x1 << " " << y32<< " "<< x2 <<  " " << y42 <<"\n";
            }
        }
    }

    return 0;
}