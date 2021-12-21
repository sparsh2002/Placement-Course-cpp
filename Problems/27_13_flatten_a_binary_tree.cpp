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

void inOrderPrint(Node * root){
    if(root == NULL){
        return;
    }

    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}

void flatten(Node * root){
    if(root == NULL or (root->left == NULL and root->right == NULL)){
        return;
    }
    if(root->left != NULL){
        flatten(root->left);

        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node * t = root->right;
        while(t->right != NULL){
            t = t->right;
        }
        t->right = temp;
    }
}

int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    flatten(root);
    inOrderPrint(root);
    return 0;
}