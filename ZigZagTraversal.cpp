// Zig-zag traversal in which traversal is level order, firstly left to right then right to left.

class Solution {
public:

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int s=q.size();
            vector<int> temp;
            for(int i=0;i<s;i++){
            TreeNode* cur=q.front();
            q.pop();
            temp.push_back(cur->val);
            if(cur->left)q.push(cur->left);
            if(cur->right)q.push(cur->right);
            }
            if(c%2==1) reverse(temp.begin(),temp.end());
            c++;
            res.push_back(temp);
        }
        return res;
    }
};
