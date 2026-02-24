class Solution {
public:
    bool solve(TreeNode* root,int k, unordered_set<int> &set){
        if(!root)return false;
        if(set.find(k-root->val)!=set.end())return true;
        set.insert(root->val);
        return solve(root->left,k,set)|| solve(root->right,k,set);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root)return false;
        unordered_set<int> set;
        return solve(root,k,set);
    }
};
