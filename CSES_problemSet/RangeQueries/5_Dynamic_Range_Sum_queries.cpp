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
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;

ll a[N], tree[4*N];

void build(int node , int st , int en){
    if(st==en){
        tree[node] = a[st];
        return;
    }

    int mid = (st+en)/2;

    build(2*node , st , mid);
    build(2*node+1 , mid+1 , en);

    tree[node] =  tree[2*node] + tree[2*node+1];
}


ll query(int node , int st , int en , int l , int r){
    if(r<st or l>en){
        return 0;
    }

    if(l<=st and en<=r){
        return tree[node];
    }

    int mid = (st+en)/2;
    return query(2*node , st, mid, l, r) + query(2*node+1 , mid+1 , en , l, r);

}

void update(int node , int st , int en , int idx , int val){
    if (st==en)
    {
        a[st] = val;
        tree[node] = val;
        return;
    }

    int mid = (st+en)/2;
    if(idx<=mid){
        update(2*node , st, mid , idx, val);
    }
    else{
        update(2*node+1 , mid+1, en , idx, val);
    }

    tree[node] = tree[2*node] + tree[2*node+1];
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    rep(i , 0, n) cin >> a[i];
    build(1 ,0 , n-1);

    rep(i ,0, q){
        int t , x1 , x2;
        cin >> t >> x1 >> x2;
        if(t==1){
            update(1 , 0 , n-1 , x1-1 , x2);
        }
        else{
            cout << query(1 , 0 , n-1 , x1-1 , x2-1) << "\n";
        }
    }

    return 0;
}