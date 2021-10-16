#include<bits/stdc++.h>
using namespace std;

int rain_water(vector <int>  a){
    stack <int> st;
    int n = a.size() , ans = 0;
    for(int i=0 ; i <  n ; i++){
        while(!st.empty() and a[st.top()] < a[i]){
            int curr = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i - st.top() - 1;
            ans += (min(a[st.top()],a[i])-a[curr])*diff;
        }
        st.push(i);
    }
    return ans;
}


int32_t main(){
    vector<int> a;
    int n;
    cin >> n ;
    for(int i=0 ; i < n ; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << rain_water(a) << endl;
     
}

// {0,1,0,2,1,0,1,3,2,1,2,1}