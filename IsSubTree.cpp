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
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(!root) return false;

        return isSame(root,subroot)||isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
    private:
    bool isSame(TreeNode*root,TreeNode* subroot){
        if(!root && !subroot) return true;
        if(!root || !subroot )return false;

        return root->val==subroot->val && isSame(root->left,subroot->left) && isSame(root->right,subroot->right) ;
    }
};
