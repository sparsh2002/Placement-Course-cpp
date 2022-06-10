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
    int maxx =INT_MIN;
    int postOrder(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = postOrder(root->left);
        int right = postOrder(root->right);
        int val = root->val;
        int nodeMax = max(max(left+val , right+val) , max(val , val+left+right));
        maxx = max(maxx , nodeMax);
        return max(max(left+val , right+val) , val);
    }
    int maxPathSum(TreeNode* root) {
        maxx = INT_MIN;
        postOrder(root);
        return maxx;
    }
};