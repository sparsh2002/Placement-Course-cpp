#include<bits/stdc++.h>
using namespace std;

// halka halka a gaya hai

int get_max_area(vector <int> a){
    int n = a.size() , ans = 0 , i=0;
    stack <int> st;
    a.push_back(0);
    while(i<n){
        while(!st.empty() and a[st.top()]>a[i]){
            int t = st.top();
            int h = a[t];
            st.pop();
            if(st.empty()){
                ans = max(ans , h*i);
            }
            else{
                int len = i - st.top() - 1;
                ans = max(ans,h*len);
            }
           
        }
         st.push(i);
         i++;
    }
    return ans;
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    // for(int i=0 ; i<6 ; i++){
    //     cout << v[i] << " ";
    // }
   
    cout << get_max_area(v) << endl;
    return 0;
}