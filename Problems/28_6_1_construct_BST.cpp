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
    vector<TreeNode*> constructBST(int start , int end){
        vector<TreeNode*> trees;
        if(start>end){
            trees.push_back(NULL);
        }
        for(int i=start ; i<=end ; i++){
            vector<TreeNode*> leftSubtree =constructBST(start , i-1);
            vector<TreeNode*> rightSubtree = constructBST(i+1 , end);
            
            for(int j=0 ; j<leftSubtree.size() ; j++){
                TreeNode* left = leftSubtree[j];
                for(int k=0 ; k<rightSubtree.size() ; k++){
                    TreeNode* right = rightSubtree[k];
                    TreeNode* node = new TreeNode(i);
                    node->left = left;
                    node->right = right;
                    trees.push_back(node);
                }
            }
        }
        
        return trees;
    }
    vector<TreeNode*> generateTrees(int n) {
        return constructBST(1 , n);
    }
};