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
    TreeNode* build(vector<int>&arr , int start , int end){
        if(start>end) return NULL;
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = build(arr , start , mid-1);
        root->right = build(arr , mid+1 , end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        return build(arr , 0 , arr.size()-1);
    }
};