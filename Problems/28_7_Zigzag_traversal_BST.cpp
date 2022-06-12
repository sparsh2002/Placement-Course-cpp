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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> currLevel;
        stack<TreeNode*> nextLevel;
        bool LeftToRight = true;
        currLevel.push(root);
        while(!currLevel.empty()){
            vector<int> level;
            while(!currLevel.empty()){
                auto top = currLevel.top();
                currLevel.pop();
                if(LeftToRight){
                    if(top->left)nextLevel.push(top->left);
                    if(top->right)nextLevel.push(top->right);
                }
                else{
                    if(top->right)nextLevel.push(top->right);
                    if(top->left)nextLevel.push(top->left);
                }
                level.push_back(top->val);
            }
            
            if(!nextLevel.empty()){
                LeftToRight = !LeftToRight;
                nextLevel.swap(currLevel);
            }
            ans.push_back(level);
        }
        return ans;
    }
};