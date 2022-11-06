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

int giveType(string s){
    string a = "";

    // 0 -> taxi
    // 1 -> pizza
    // 2 -> girls

    string x = s.substr(0 , 2);
    string y = s.substr(3 , 2);
    string z = s.substr(6 , 2);
    a = x+y+z;
    // cout << a << "\n";

    if(x==y and y==z) return 0;

    
    
    bool yes = true;

    rep(i , 0 , 5){
        if(s[i]<=s[i+1]) return 2;
    }

    return 1;
}

void printNames(vector<string> arr){
    int n = arr.size();
    if(n==1){
        cout << arr[0];
        return;
    }

    rep(i ,0 , n-1){
        cout << arr[i] << ", ";
    }
    cout << arr[n-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int> > mp(n , vector<int>(3 , 0)) ;
    int t = INT_MIN , p = INT_MIN , g = INT_MIN;

    vector<string> names;

    rep(i , 0 , n){
        int k;
        string s;
        cin >> k;
        cin >> s;
        names.push_back(s);
        set<string> st;
        rep(j , 0 , k){
            string curr;
            cin >> curr;
            st.insert(curr);
        }

        k = st.size();

        set<string>::iterator it;
        for(it=st.begin() ; it!=st.end() ; it++){
            mp[i][giveType(*it)]++;
        }
    }

    vector<string> taxinames;
    vector<string> pizzanames;
    vector<string> girlnames;


    for(int i=0 ; i<n ; i++){
        int t1 = mp[i][0];
        int p1 = mp[i][1];
        int g1 = mp[i][2];


        t = max(t1 , t);
        p = max(p1 , p);
        g = max(g1 , g);
    }

    for(int i=0 ; i<n ; i++){
        int t1 = mp[i][0];
        int p1 = mp[i][1];
        int g1 = mp[i][2];


        if(t1==t) taxinames.push_back(names[i]);
        if(p1==p) pizzanames.push_back(names[i]);
        if(g1==g) girlnames.push_back(names[i]);
    }

    cout << "If you want to call a taxi, you should call: ";
    printNames(taxinames);
    cout << ".\n";
    cout << "If you want to order a pizza, you should call: ";
    printNames(pizzanames) ;
    cout << ".\n";
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    printNames(girlnames) ;
    cout << ".\n";

    return 0;
}