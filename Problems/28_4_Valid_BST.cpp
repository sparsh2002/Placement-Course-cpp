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
    bool isValid(TreeNode* root , long long minn , long long maxx){
        if(root==NULL) return true;
        if(root->val<=minn or root->val>=maxx) return false;
        return isValid(root->left , minn , root->val) and 
               isValid(root->right, root->val , maxx);
    }
    bool isValidBST(TreeNode* root) {
        return isValid(root , -2147483649 , 2147483648);
    }
};

// check these test cases
// [2,1,3]
// [5,1,4,null,null,3,6]
// [2,2,2]
// [2147483647]
// [-2147483648]