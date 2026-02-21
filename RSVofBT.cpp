// Right side view of a Binary Tree

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> temp;
            for(int i=0;i<s;i++){
                TreeNode* cur=q.front();
                q.pop();
                temp.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ans.push_back(temp[s-1]);
        }
        return ans;
    }
};
