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

int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout << root->data << endl;
    cout << root->right->data << endl;
    return 0;
}