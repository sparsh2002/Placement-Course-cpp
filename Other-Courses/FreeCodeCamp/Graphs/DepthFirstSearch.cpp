#include<bits/stdc++.h>
using namespace std;
void depthFirst(unordered_map<char , vector<char> > mp , char source){
    stack<char> st;
    st.push(source);
    while(!st.empty()){
        char current = st.top();
        st.pop();
        cout << current << " ";
        for(int i=0 ; i< mp[current].size() ; i++){
            st.push(mp[current][i]);
        }
    }
}

int main() {
    unordered_map<char , vector<char> > mp;
    mp['a'] = {'c','b'};
    mp['b'] = {'d'};
    mp['c'] = {'e'};
    mp['d'] = {'f'};
    mp['e'] = {};
    mp['f'] = {};
    
    depthFirst(mp , 'a');

    return 0;

}