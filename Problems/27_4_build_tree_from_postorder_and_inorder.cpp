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
int search(int postorder[] , int start , int end , int curr){
    for(int i=start ; i<=end ; i++){
        if(postorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[] , int inorder[] , int start , int end){
    static int idx = end;
    if(start>end){
        return NULL;
    }

    int curr = postorder[idx];
    idx--;
    Node * node = new Node(curr);
    if(start==end){
        return node;
    }

    int pos = search(postorder , start , end , curr);
    node->right = buildTree(postorder , inorder , pos+1 , end);
    node->left = buildTree(postorder , inorder , start , pos-1);
    return node;
}

void postorderPrint(struct Node * root){
    if(root==NULL){
        return ;
    }

    postorderPrint(root->left);
    postorderPrint(root->right);
    cout << root->data << " ";
}


int main(){
    int postorder[] = {4,2,5,3,1};
    int  inorder[] = {4,2,1,5,3};

    struct Node* root = buildTree(postorder , inorder , 0,4);
    postorderPrint(root);
    return 0;
}