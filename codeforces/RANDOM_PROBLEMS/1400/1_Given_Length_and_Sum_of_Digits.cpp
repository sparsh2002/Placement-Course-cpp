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
    int n, s;
    cin >> n >> s;
    if(s==0 and n==1){
        cout << "0 0" << "\n";
        return 0;
    }
    if(s==0 or n*9<s){
        cout << "-1 -1" << "\n";
        return 0;
    }

    string minn ="";
    string maxx = "";

    rep(i, 0 , n ) minn += "0";
    maxx =minn;

    int temps = s;
    minn[0] = '1';
    s -= 1;
    rep_rev(i , n-1 , -1){
        int x = minn[i]-'0';
        if(s>=9){
            x += 9;
            s -= 9;
        }
        else{
            x += s;
            s =0;
        }
        minn[i] = (char)(x+48);
    }
    s = temps;
    rep(i , 0, n){
        int x = maxx[i]-'0';
        if(s>=9){
            x += 9;
            s -= 9;
        }
        else{
            x += s;
            s =0;
        }

        maxx[i] = (char)(x+48);
    }

    cout << minn << " " <<  maxx << "\n";

    return 0;
}