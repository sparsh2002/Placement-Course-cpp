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

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);

string removeKduplicate(string s , int k){
   int n = s.size();
   stack< pair < char,int > > st;
   for(int i=0 ; i<n ; i++){
       if(st.empty()){
           st.push(make_pair(s[i] , 1));
       }
       else{
           if((st.top().second == k-1) and( s[i]==st.top().first)){
               while(s[i]==st.top().first){
                   st.pop();
               }
           }
            else if(st.top().first == s[i]){
                st.push(make_pair(s[i] , st.top().second+1));
            }
            else{
                st.push(make_pair(s[i] , 1));
            }
       }
   }
   string ans = "";
   while(!st.empty()){
       ans = st.top().first + ans;
       st.pop();
   }
   return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << removeKduplicate(s,k) << "\n";

    return 0;
}