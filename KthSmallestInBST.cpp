class Solution {
public:
    void inord(TreeNode* root, vector<int> &v){
        if(!root) return;
        inord(root->left,v);
        v.push_back(root->val);
        inord(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inord(root,v);
        return v[k-1];
    }
};
