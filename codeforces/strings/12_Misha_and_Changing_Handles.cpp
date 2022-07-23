#include<bits/stdc++.h>
// #include <cstdalign>
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

// 5
// Misha ILoveCodeforces
// Vasya Petrov
// Petrov VasyaPetrov123
// ILoveCodeforces MikeMirzayanov
// Petya Ivanov

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    set<string> st;
    vector<vector<vector<string> > > arr;
    rep(i, 0, n){
        string oldName , newName;
        cin >> oldName >>  newName;
        if(st.find(newName)==st.end() and st.find(oldName)==st.end()){
            vector<vector<string> > l;
            vector<string> temp;
            temp.push_back(oldName);
            temp.push_back(newName);
            l.push_back(temp);
            arr.push_back(l);
            st.insert(newName);
            st.insert(oldName);
        }
        else if(st.find(oldName)!=st.end()){
            rep(i , 0 , arr.size()){
                vector<vector<string> > l = arr[i];
                if(l[l.size()-1][1]==oldName){
                    vector<string> temp;
                    temp.push_back(oldName);
                    temp.push_back(newName);
                    l.push_back(temp);
                    arr[i] = l;
                    st.insert(newName);
                    break;
                }
            }
        }
    }

    cout << arr.size() << "\n";
    // sort(arr.begin() , arr.end());
    rep(i , 0 , arr.size()){
        vector<vector<string> > temp = arr[i];
        cout << temp[0][0] << " " << temp[temp.size()-1][1] << "\n";
    }

    return 0;
}