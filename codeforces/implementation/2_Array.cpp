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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    vector<int> pos;
    vector<int> neg;
    vector<int> zero;

    for(int i=0 ; i<n ; i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            zero.push_back(arr[i]);
        }
    }

    vector<int> ans1;
    vector<int> ans2(pos.begin() , pos.end());
    vector<int> ans3(zero.begin() , zero.end());

    if(neg.size()%2==1){
        ans1.push_back(neg[0]);
        for(int i=1 ; i<neg.size() ; i++){
            ans2.push_back(neg[i]);
        }
    }
    else{
        ans1.push_back(neg[0]);
        for(int i=1 ; i<neg.size()-1 ; i++){
            ans2.push_back(neg[i]);
        }
        ans3.push_back(neg[neg.size()-1]);
    }

    cout << ans1.size() << " ";
    for(int i=0 ; i<ans1.size() ; i++){
        cout << ans1[i] << " ";
    }
    cout << "\n";
    cout << ans2.size() << " ";
    for(int i=0 ; i<ans2.size() ; i++){
        cout << ans2[i] << " ";
    }
    cout << "\n";
    cout << ans3.size() << " ";
    for(int i=0 ; i<ans3.size() ; i++){
        cout << ans3[i] << " ";
    }
    cout << "\n";
    return 0;
}