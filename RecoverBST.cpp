class Solution {
public:
    TreeNode* fir=NULL;
    TreeNode* sec=NULL;
    TreeNode* prev=NULL;
    void inord(TreeNode* root){
        if(!root)return;
        inord(root->left);
        if(prev && root->val< prev->val){
            if(!fir) fir=prev;
            sec=root;
        }
        prev=root;
        inord(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(!root) return;
        inord(root);
        if(fir && sec)swap(fir->val, sec->val);
        
    }
};
