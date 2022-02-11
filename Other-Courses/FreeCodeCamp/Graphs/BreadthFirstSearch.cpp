#include<bits/stdc++.h>
using namespace std;
void breadthFirst(unordered_map<char , vector<char> > mp , char source){
    queue<char> q;
    q.push(source);
    while(!q.empty()){
        char current = q.front();
        q.pop();
        cout << current << " ";
        for(int i=0 ; i< mp[current].size() ; i++){
            q.push(mp[current][i]);
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
    
    breadthFirst(mp , 'a');
   
}