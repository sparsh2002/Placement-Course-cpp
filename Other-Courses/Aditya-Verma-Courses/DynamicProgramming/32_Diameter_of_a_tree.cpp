// Diamter including both the end nodes

class Solution {
public:
    int solve(TreeNode * root , int &res){
        if(root==NULL){
            return 0;
        }
        int l = solve(root->left , res);
        int r = solve(root->right ,res);

        int temp = 1 + max(l,r);
        int ans = max(temp , l+r+1);

        res = max(res , ans);

        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        solve(root,res);
        return res;
    }
};