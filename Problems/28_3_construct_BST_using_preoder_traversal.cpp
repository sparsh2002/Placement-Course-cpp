/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructBST(vector<int>& preorder , int * idx , int key , int min , int max , int n){
        if(*idx>=n){
            return NULL;
        }
        TreeNode* root = NULL;
        if(key>min and key<max){
            root = new TreeNode(key);
            *idx = *idx + 1;
            if(*idx < n){
                root->left =constructBST(preorder , idx , preorder[*idx] , min , key,n);
            }
            if(*idx < n){
                root->right=constructBST(preorder , idx , preorder[*idx] , key , max,n);
            }
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        int min = INT_MIN;
        int max = INT_MAX;
        int idx = 0;
        return constructBST(preorder ,&idx , preorder[0] , min , max , n );
    }
};