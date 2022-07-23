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

int zeros,ones;
string s;

void solve(){
    int i = 0 , j = s.size()-1;
    while(i<j){
        if(s[i]=='?' and s[j]=='?'){
            int maxx = max(ones,zeros);
            if(maxx<2) return;
            if(maxx==ones){
                s[i]='1';
                s[j]='1';
                ones -= 2;
            }
            else{
                s[i]='0';
                s[j]='0';
                zeros-= 2;
            }
        }
        else if(s[i]=='?'){
            if(s[j]=='1'){
                if(ones==0) return;
                s[i] = '1';
                
                ones--;
            }
            else{
                if(zeros==0) return;
                s[i] ='0';
                
                zeros--;
            }
        }
        else if(s[j]=='?'){
            if(s[i]=='1'){
                if(ones==0) return;
                s[j] = '1';
                
                ones--;
            }
            else{
                if(zeros==0) return;
                s[j] ='0';
                zeros--;
            }
        }
        

        i++;
        j--;
    }
    if(s.size()%2==1){
        if(s[i]=='?'){
            if(ones!=0){
            s[i] = '1';
            }
            else if(zeros!=0){
                s[i] = '0';
            }
            else{
                return;
            }
        }
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> zeros >> ones;
        cin >> s;
        rep(i, 0 , s.size()){
            if(s[i]=='1'){
                ones--;
            }
            else if(s[i]=='0'){
                zeros--;
            }
        }

        solve();
        bool ans = true;
        rep(i , 0 , s.size()){
            if(s[i]=='?'){
                ans = false;
                break;
            }
        }

        // cout << s << "\n";
        // cout << ones << " " <<  zeros << "\n";
        if(ones!=0 and zeros!=0){
            cout << -1 << "\n";
        }
        else if(ans){
            string rev = s;
            reverse(rev.begin() , rev.end());
            
            if(s==rev){
                cout <<  s << "\n";
            }
            else{
                cout <<  -1 << "\n";
            }
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}