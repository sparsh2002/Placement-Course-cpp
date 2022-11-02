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
    int p , q , l , r;
    cin >> p >> q >> l >> r;

    vector<pair<int,int> > x(p);
    vector<pair<int,int> > y(q);

    rep(i , 0 , p){
        int a , b;
        cin >> a >> b;
        x[i] = make_pair(a ,b);
    }

    rep(i , 0 , q){
        int c, d;
        cin >> c  >> d;
        y[i] = make_pair(c , d);
    }

    vector<int> first(5000 , false);
    for(int i=0 ; i<p ; i++){
        int start = x[i].first;
        int end = x[i].second;

        for(int j=start ; j<=end ; j++){
            first[j] = true;
        }
    }

    int ct = 0;
    for(int i=l ; i<=r ; i++){
        
        vector<int> second(5000 , false);

        for(int k=0 ; k<q ; k++){
            int start = y[k].first+i;
            int end = y[k].second+i;

            for(int j=start ; j<=end ; j++){
                second[j] = true;
            }
        }

        bool yes = false;

        for(int k=0 ; k<=5000 ; k++){
            if(first[k]==true and second[k]==true){
                yes = true;
            }
        }

        if(yes)ct++;

    }

    cout << ct << "\n";

    return 0;
}