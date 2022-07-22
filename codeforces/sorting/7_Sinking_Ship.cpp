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
#define rep_rev(i , a, b) for(int i=a ; i>b ; i--)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

// priority
// 1 -> rat
// 2 -> woman & children
// 3 -> man
// 4 -> captain

bool static cmp(const pair<pair<int,int> , string >  &a , const pair<pair<int,int>  , string>  &b ){
    if(a.first.first==b.first.first){
        return a.first.second < b.first.second;
    }

    return a.first.first < b.first.first;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<pair<int,int>  , string> > arr(n);
    // {{role , index} , name}
    rep(i ,0 , n){
        string name, role;
        cin >> name >> role;
        if(role=="rat"){
            arr[i].first.first = 1;
        }
        else if(role=="woman" or role=="child"){
            arr[i].first.first = 2;
        }
        else if(role=="man"){
            arr[i].first.first = 3;
        }
        else{
            arr[i].first.first = 4;
        }

        arr[i].first.second = i;

        arr[i].second = name;
    }

    sort(arr.begin() , arr.end() ,cmp);
    rep(i , 0 , n){
        cout << arr[i].second << "\n";
    }

    return 0;
}