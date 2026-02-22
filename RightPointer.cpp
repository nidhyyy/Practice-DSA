// Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.
// Initially, all next pointers are set to NULL.

class Solution {
public:
    Node* connect(Node* root) {
        if(!root || !root->left) return root;
        queue<Node*>  q;
        q.push(root);
        q.push(NULL);
        Node* prev=NULL;
        while(q.size()>0){
            Node* cur=q.front();
            q.pop();
            if(cur==NULL){
                if(q.size()==0) break;
                q.push(NULL);
            }
            else{
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);

                if(prev!=NULL){
                    prev->next=cur;
                }
            }
            prev=cur;
            }
            return root;

    }
};
