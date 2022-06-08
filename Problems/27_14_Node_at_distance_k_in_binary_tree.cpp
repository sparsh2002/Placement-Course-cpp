/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void SearchInSubtree(TreeNode* root , int k){
        if(root==NULL) return;
        if(k==0){
            ans.push_back(root->val);
            return;
        }
        SearchInSubtree(root->left , k-1);
        SearchInSubtree(root->right , k-1);
    }
    
    int findNode(TreeNode* root , TreeNode* target , int k ){
        if(root==NULL or k<0) return -1;
        if(root==target){
           SearchInSubtree(root , k);
           return 0; 
        }
        
        int dl = findNode(root->left , target , k);
        if(dl!=-1){
            if(dl+1==k){
                ans.push_back(root->val);
            }
            else{
                SearchInSubtree(root->right, k-dl-2);
            }
            return 1+dl;
        }
        int dr = findNode(root->right , target , k);
        if(dr!=-1){
            if(dr+1==k){
                ans.push_back(root->val);
            }
            else{
                SearchInSubtree(root->left , k-dr-2);
            }
            return 1+dr;
        }
        
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        ans.clear();
        findNode(root , target , k);
        return ans;
    }
};