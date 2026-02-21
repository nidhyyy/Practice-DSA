// Diameter of a binary tree 

class Solution {
public:
    int height(TreeNode* root){
        if(!root)return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
       int lh=height(root->left);
       int rh=height(root->right);
       int maxdia=max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
       return max(maxdia,lh+rh); 
    }
};
