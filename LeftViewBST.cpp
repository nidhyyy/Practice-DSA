class Solution {
  public:
    vector<int> leftView(Node *root) {
       vector<int> res;
       if(!root)return res;
       
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int s=q.size();
           vector<int> tem;
           for(int i=0;i<s;i++){
               Node* cur=q.front();
               tem.push_back(cur->data);
               q.pop();
               if(cur->left) q.push(cur->left);
               if(cur->right) q.push(cur->right);
           }
           res.push_back(tem[0]);
       }
       return res;
    }
};
