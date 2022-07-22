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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 1e7+1;
double PI = acos(-1);
int MOD = 1000000007;

ll arr[N+1];


void seive(){
    for(ll i=1 ; i<=N ; i++) arr[i] = -1;
    for(ll i=2 ; i<=N ; i++){
        if(arr[i]==-1){
            for(ll j=i ; j<=N ; j+=i){
                if(arr[j]==-1){
                    arr[j] = i;
                }
            }
        }
    }
}

vector<ll> canSplitPower(ll x){
    vector<ll> ans;
    for(ll i=1 ; i<=x ; i++){
        for(ll j=1 ; j<=x ; j++){
            for(ll k=1 ; k<=x ; k++){
                if(i!=j and j!=k and i!=k and i+j+k==x){
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(k);
                }
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // seive();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        set<int>st;
        set<int>:: iterator it ;
        int tempN = n;
        for(int i=2 ; i*i<=tempN ; i++){
            if(st.size()==2){
                st.insert(n);
                break;
            }
            if(n%i==0){
                st.insert(i);
                n = n/i;
            }
        }
        // for(it = st.begin() ; it!=st.end() ; it++){
        //         cout << *it << " ";
        // }
        if(st.size()==3){
            cout << "YES" << "\n";
            for(it = st.begin() ; it!=st.end() ; it++){
                cout << *it << " ";
            }
            cout <<  "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}