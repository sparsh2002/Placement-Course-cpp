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

vi v;
void getDecompose(int n)
{
    for (int i=2;i<=n;i++)
    {
        while (n % i == 0)
        {
            n /= i;
            v.push_back(i);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    // primeFactor(n);
    // st.insert(n);
    // vi ans;
    // set<int>::iterator it;
    // for(it=st.begin(); it!=st.end() ; it++){
    //     ans.push_back(*it);
    // }

    // sort_vr(ans);
    // rep(i,  0 , ans.size()){
    //     cout << ans[i] << " ";
    // }

    int i =1;

    while(n!=0){
        cout << n << " ";
        while(n!=0){
            if(n%2==0){
                n = n/2;
                break;
            }
            else{
                n = n/2;
            }
        }
    }
    return 0;
}