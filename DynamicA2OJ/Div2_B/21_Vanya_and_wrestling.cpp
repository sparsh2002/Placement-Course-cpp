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


long long n,q,s1,s2;
vector<long long> v1,v2;
long long lst;
 
bool cmp(vector<long long> v1,vector<long long> v2)
{
 for (int i=0;i<v1.size();i++)
 {
  if (i==v2.size())return true;
  if (v1[i]>v2[i])return true;
  if (v1[i]<v2[i])return false;
 }
 return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
for (;n;--n)
{
 cin>>q;
 if (q<0)v2.push_back(-q);
 else v1.push_back(q);
 if (q<0)lst=2;
 else lst=1;
}
 
s1=s2=0;
for (int i=0;i<v1.size();i++)
 s1+=v1[i];
for (int i=0;i<v2.size();i++)
 s2+=v2[i];
if (s1>s2)
 cout<<"first"<<endl;
 else if (s1<s2)
 cout<<"second"<<endl;
 else if (cmp(v1,v2)==1)
  cout<<"first"<<endl;
  else if (cmp(v2,v1)==1)
   cout<<"second"<<endl;
  else if (lst==1)
   cout<<"first"<<endl;
   else cout<<"second"<<endl;
   
cin.get();cin.get();
return 0;
}