struct Node{
    Node* links[26];
    int endsWith = 0;
    int countPrefix = 0;
    
    bool containsKey(char ch){
        if(links[ch-'a']!=NULL){
            return true;
        }
        return false;
    }
    
    void put(char ch , Node* node){
        links[ch-'a'] = node;
    }
    
    Node* get(char ch){
        return links[ch-'a'];
    }
    
};
class Trie{
    private:
        Node * root;
    public:

    Trie(){
        root = new Node();
    }

    void insert(string &word){
        Node* node = root;
        for(int i=0 ; i<word.size() ; i++){
            if(!node->containsKey(word[i])){
                node->put(word[i],new Node());
            }
            node = node->get(word[i]);
            node->countPrefix++;
        }
        node->endsWith++;
    }

    int countWordsEqualTo(string &word){
       Node* node = root;
       for(int i=0 ; i<word.size() ; i++){
            if(!node->containsKey(word[i])){
                return 0;
            }
            node = node->get(word[i]);
       }
       return node->endsWith;
    }

    int countWordsStartingWith(string &word){
       Node* node = root;
       for(int i=0 ; i<word.size() ; i++){
            if(!node->containsKey(word[i])){
                return 0;
            }
            node = node->get(word[i]);
       }
       return node->countPrefix;
    }

    void erase(string &word){
        Node * node = root;
        for (int i = 0; i < word.length(); i++) {
        if (node-> containsKey(word[i])) {
            node = node-> get(word[i]);
            node ->countPrefix--;
        } else {
            return;
        }
        }
        node ->endsWith--;
    }
};
