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

int height(Node * root){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh) +1;
}

bool isBalanced(Node * root){
    if(root==NULL){
        return true;
    }

    if(!isBalanced(root->left)){
        return false;
    }

    if(!isBalanced(root->right)){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}

bool isbalanced(Node * root , int * height){
    if(root==NULL){
        *height = 0;
        return true;
    }
    int lh = 0 , rh = 0;
    if(!isbalanced(root->left , &lh)){
        return false;
    }
    if(!isbalanced(root->right , &rh)){
        return false;
    }

    *height = max(lh,rh) +1;
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << isBalanced(root) << endl;
    int height = 0;
    cout << isbalanced(root , &height) << endl;

    root->right->right->right = new Node(8);
    root->right->right->right->right = new Node(9);

    height = 0;
    cout << isBalanced(root) << endl;
    cout << isbalanced(root , &height);

    return 0;
}