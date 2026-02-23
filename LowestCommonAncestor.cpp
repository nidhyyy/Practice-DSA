class Solution {
public: 
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root)return root;
        if(root==p || root==q)return root;
        TreeNode* rs=solve(root->right,p,q);
        TreeNode* ls=solve(root->left,p,q);

        if(rs && ls) return root;
        if(ls)return ls;
        if(rs)return rs;
        return NULL;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=solve(root,p,q);
        if(!ans)return NULL;
        return ans;
    }
};
