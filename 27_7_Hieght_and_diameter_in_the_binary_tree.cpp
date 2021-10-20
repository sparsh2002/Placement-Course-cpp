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

int calcHieght(Node * root){
    if(root==NULL){
        return 0;
    }
    int lHieght = calcHieght(root->left);
    int rHieght = calcHieght(root->right);
    return max(lHieght,rHieght)+1;
}

int calcDiameter(Node * root){
    if(root==NULL){
        return 0;
    }
    int lHieght = calcHieght(root->left);
    int rHieght = calcHieght(root->right);
    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    int maxOne = max(lDiameter,rDiameter);
    return max(maxOne , lHieght+rHieght+1);
}

int calcDiam(Node * root , int * height){
    if(root==NULL){
        *height = 0;
        return 0;
    }

    int lh = 0 , rh = 0;
    int lDiameter = calcDiam(root->left , &lh);
    int rDiameter = calcDiam(root->right , &rh);
    
    int currDiameter = lh+rh+1;
    *height = max(lh , rh) + 1;

    return max(currDiameter , max(lDiameter,rDiameter));

}


int main(){
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << calcHieght(root) << endl;
    cout << calcDiameter(root) << endl;
    int height = 0;
    cout << calcDiam(root , &height) << endl;
    return 0;
}