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

void solve1(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        int ct = 0;
        for(int i=1 ; i<=x ; i++){
            if(x%i==0){
                ct++;
            }
        }
        cout << ct << "\n";
    }
}

void solve2(){
    int n;
    cin >> n;
    for(int i=0; i<n ; i++){
        int x;
        cin >> x;
        int ct =0;
        for(int i=1 ; i*i<=x ; i++){
            if(x%i==0){
                ct++;
                if(i!=x/i) ct++;
            }
        }
        cout << ct << "\n";
    }
}

void solve3(){
    int n;
    cin >> n;
    vector<int> queries(n);
    for(int i=0 ; i<n ; i++){
        cin >> queries[i];
    }
    int maxx = *max_element(queries.begin() , queries.end());
    vector<int> divisors(maxx+1 , 0);
    for(int i=1 ; i<=maxx; i++){
        for(int j=i ; j<=maxx ; j += i){
            divisors[j]++;
        }
    }
    for(int i=0 ; i<queries.size() ; i++){
        cout << divisors[queries[i]] << "\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // solve1();
    // solve2();
    solve3();

    return 0;
}