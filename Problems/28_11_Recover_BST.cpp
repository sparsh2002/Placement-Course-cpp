class Solution {
public:
    void swap(int *a , int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    void calcPointer(TreeNode* root , TreeNode** first , TreeNode** mid ,
                     TreeNode** last , TreeNode** prev){
        if(root==NULL){
            return;
        }
        
        calcPointer(root->left , first , mid , last , prev);
        
        if(*prev and root->val < (*prev)->val){
            if(!(*first)){
                *first = *prev;
                *mid = root;
            }
            else{
                *last = root;
            }
        }
        
        *prev = root;
        calcPointer(root->right , first , mid , last , prev);
        
    }
    
    
    void recoverTree(TreeNode* root) {
        TreeNode* first , *mid , *last , *prev;
        first = NULL;
        mid = NULL;
        last = NULL;
        prev = NULL;
        
        calcPointer(root , &first , &mid, &last , &prev);
        
        // case1 
        
        if(first and last){
            swap(&(first->val) , &(last->val));
        }
        
        //case 2
        
        else if(first and mid){
            swap(&(first->val) , &(mid->val));
        }
        
        
    }
};