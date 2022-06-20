struct Node{
    Node* links[26];
    bool flag = false;
    
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
    
    void setEnd(){
        flag = true;
    }
    
    bool getEnd(){
        return flag;
    }
    
};
string completeString(int n, vector<string> &arr){
    Node* root = new Node();
    Node* node;
    for(int j=0 ; j<n ; j++){
        node = root;
        string word = arr[j];
        for(int i=0 ; i<word.size() ; i++){
            if(!node->containsKey(word[i])){
                node->put(word[i] , new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }
    
    int maxx = 0;
    string ans = "";
    sort(arr.begin() , arr.end());
    reverse(arr.begin() , arr.end());
    for(int j=0 ; j<n;j++){
        string word = arr[j];
        bool yes = true;
        for(int k=0 ; k<word.size() ; k++){
            node = root;
            string curr = word.substr(0 , k+1);
            bool found = true;
            for(int i=0 ; i<curr.size() ; i++){
                if(!node->containsKey(curr[i])){
                    found = false;
                    break;
                }
                node = node->get(curr[i]);
            }
            if(!found or !node->getEnd()){
                yes = false;
            }
        }
        if(yes){
            if(maxx<=word.size()){
                ans = word;
                maxx = word.size();
            }
        }
    }
    if(maxx==0){
        return "None";
    }
    
    return ans;
}