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

vector<int> stockSpan(vector<int> v1){
    stack<pair<int,int> > s1;
    vector<int> answer;

    for(int i=0; i<v1.size(); i++)
    {
        int temp;
        if(s1.empty())
            temp=1;
        
        else if(s1.top().first>v1[i])
            temp=1;
        
        else if(s1.top().first<=v1[i])
        {
            while(!s1.empty() && s1.top().first<=v1[i])
                s1.pop();
            
            if(s1.empty())
                temp=i+1;
            else
                temp=i-s1.top().second;
            
        }

        answer.push_back(temp);
        s1.push(make_pair(v1[i],i));
    }

    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    ans = stockSpan(arr);
    for(int i=0 ; i<n ; i++){
        cout <<  ans[i] << " ";
    }
    return 0;
}