#include<bits/stdc++.h>
struct Node{
    Node * links[2];
    
    bool containsKey(char ch){
        if(links[ch-'0']!=NULL){
            return true;
        }
        return false;
    }
    
    void put(char ch , Node* node){
        links[ch-'0'] = node;
    }
    
    Node* get(char ch){
        return links[ch-'0'];
    }
};

string convertToBinary(int n){
    string s = "";
    while(n!=0){
        s = to_string(n&1) + s;
        n = n >> 1;
    }
    while(s.size()!=32){
        s = "0" + s;
    }
    return s;
}

int convertToInteger(string s){
    int x = 0;
    reverse(s.begin() , s.end());
    for(int i=0 ; i<s.size() ; i++){
        x += ((s[i]-'0')<<i);
    }
    return x;
}
int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    Node * root = new Node();
    for(int i=0 ; i<n ; i++){
        Node* node = root;
        string s = convertToBinary(arr1[i]);
        for(int j=0 ; j<s.size() ; j++){
            if(!node->containsKey(s[j])){
                node->put(s[j] , new Node());
            }
            node = node->get(s[j]);
        }
    }
    
    int maxx = 0;
    for(int i=0 ; i<m ; i++){
        Node* node = root;
        string num = convertToBinary(arr2[i]);
        for(int j=0 ; j<32 ; j++){
            char curr = num[j];
            Node* temp0 = node->get('0');
            Node* temp1 = node->get('1');
            if(temp0 and temp1){
                if(curr=='0'){
                    num[j] = '1';
                    node = temp1;
                }
                else{
                    num[j] = '0';
                    node = temp0;
                }
            }
            else if(temp0){
                num[j] = '0';
                node = temp0;
            }
            else{
                num[j] = '1';
                node = temp1;
            }
        }
        int x = convertToInteger(num);
        x = x xor arr2[i];
        maxx = max(maxx ,x );
    }
    
    return maxx;
    
}