#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printPreorder(Node * root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

bool getPath(Node* root , int key , vector<int> &path){

    if(root == NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data == key){
        return true;
    }

    if(getPath(root->left , key , path) or getPath(root->right, key , path)){
        return true;
    }

    path.pop_back();
    return false;
}

int LCA(Node* root , int n1 ,int n2){
    vector<int> path1, path2;
    if(!getPath(root,n1,path1) or !getPath(root , n2 , path2)){
        return -1;
    }

    int pc;
    for(pc = 0 ; pc<path1.size() and path2.size() ; pc++){
        if(path1[pc] != path2[pc]){
            break;
        }
    }

    return path1[pc-1];
}

Node* LCA2(Node* root, int n1 ,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* left = LCA2(root->left , n1 , n2);
    Node* right = LCA2(root->right , n1, n2);

    if(left!=NULL and right!=NULL){
        return root;
    } 

    if(left == NULL and right == NULL){
        return NULL;
    }

    if(left!=NULL){
        return LCA2(root->left , n1,n2);
    }

    return LCA2(root->right , n1 , n2);
}

int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    // printPreorder(root);
    // cout << LCA(root , 7,6) << endl;
    Node* ans = LCA2(root , 7 , 6);
    cout << ans->data << endl;
    return 0;
}