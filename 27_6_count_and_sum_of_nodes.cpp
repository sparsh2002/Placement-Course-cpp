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

int countNodes(Node * root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left)+ countNodes(root->right) + 1;
}

int sum(Node * root){
    int nodeSum = 0;
    if(root==NULL){
        return 0;
    }
    nodeSum += sum(root->left) + sum(root->right) + root->data;
    return nodeSum;
}


int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << countNodes(root) << endl;
    cout << sum(root) << endl;
    return 0;
}