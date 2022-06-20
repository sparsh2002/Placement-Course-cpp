struct Node{
    Node* links[26];
    
    bool containsKey(char ch){
        if(links[ch-'a']!=NULL){
            return true;
        }
        return false;
    }
    
    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }
    
    Node* get(char ch){
        return links[ch-'a'];
    }
};
int countDistinctSubstrings(string &word)
{
    int ct = 1;
    Node* root = new Node();
   
        for(int i=0 ; i<word.size() ; i++){
            Node* node = root;
            for(int j=i ; j<word.size() ; j++){
                if(!node->containsKey(word[j])){
                    node->put(word[j] , new Node());
                    ct++;
                }
                node = node->get(word[j]);
            }
        }
    return ct;
}