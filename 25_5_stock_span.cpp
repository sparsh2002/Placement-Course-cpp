#include<bits/stdc++.h>
using namespace std;


vector<int> stockspan(vector<int> prices){
    vector <int> ans;
    stack<pair < int,int > > s;
    for(auto price : prices){
        int days = 1;
        while(!s.empty() and s.top().first <= price){
            days += s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
}

int main(){
    vector<int> v;
    int n;
    cin >> n ;
    for(int i=0 ; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector <int> res = stockspan(v);
    for(int i=0 ; i<n ; i++){
        cout << res[i] << " ";
    }
    return 0;
}