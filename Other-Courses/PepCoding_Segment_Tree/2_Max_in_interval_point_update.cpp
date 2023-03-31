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

class SegmentTree{
public:
    vector<int> tree;
    vector<int> arr;
    int n;

    SegmentTree(vector<int>&ar , int n){
        arr = ar;
        this->n = n;
        tree.resize(4*n);
        build(1 , 0 , n-1);
    }

    void build(int node , int start , int end){
        if(start==end){
            tree[node] = arr[start];
        }
        else{
            int mid = (start+end)/2;
            int left = node*2;
            int right = node*2 + 1;
            build(left , start , mid);
            build(right , mid+1 , end);
            tree[node] = max(tree[left] , tree[right]);
        }
    }

    int query(int node , int start  , int end , int left , int right){
        if(end<left or start>right) return INT_MIN;
        if(start==end){
            return tree[node];
        }
        else if(start==left and end==right ){
            return tree[node];
        }
        else{
            int mid = (start+end)/2;
            int leftMax = query(node*2 , start , mid , left , right);
            int rightMax = query(node*2+1 , mid+1 , end , left , right);
            return max(leftMax , rightMax);
        }
    }

    void update(int node , int start , int end , int pos , int val){
        if(start==end){
            arr[start] = val;
            tree[node] = val;
            return;
        }
        else{
            int mid = (start+end)/2;
            if(start<=pos && pos<=mid){
                update(node*2 , start , mid , pos , val);
            }
            else{
                update(node*2+1 , mid+1 , end , pos , val);
            }
            tree[node] = max(tree[2*node] , tree[2*node+1]);
        }
    }

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    read(arr , n);
    SegmentTree* TreeObj = new SegmentTree(arr , n);
    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type==1){
            int l, r;
            cin >> l >> r;
            cout << TreeObj->query(1 , 0 , n-1  , l , r) << "\n";
        }
        else{
            int pos , val;
            cin >> pos  >> val;
            TreeObj->update(1 , 0 , n-1 , pos , val);
        }
    }

    // cout << arr[4] << "\n";
    return 0;
}