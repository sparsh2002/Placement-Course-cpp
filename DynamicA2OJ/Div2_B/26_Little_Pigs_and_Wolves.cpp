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
    char dat[10][10];
    int n,m,i,j;
    cin>>n>>m;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++) cin>>dat[i][j];
        cin.get();
    }
    int k,x,y;
    int moves[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int ans=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (dat[i][j]!='P') continue;
            for (k=0;k<4;k++)
            {
                x=i+moves[k][0];
                y=j+moves[k][1];
                if (x>=0&&x<n&&y>=0&&y<m&&dat[x][y]=='W')
                {
                   ans++;
                   dat[x][y]='.';
                   break;     
                }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}