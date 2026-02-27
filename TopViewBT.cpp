class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        map<int,vector<int>> smap;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            Node* cur=q.front().first;
            int level=q.front().second;
            
            smap[level].push_back(cur->data);
            q.pop();
            
            if(cur->left) q.push({cur->left,level-1});
            if(cur->right)q.push({cur->right,level+1});
        }
        
        for(auto it: smap){
            ans.push_back(it.second[0]);
        }
        return ans;
    }
};
