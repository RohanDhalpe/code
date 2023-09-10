/*
class Solution{
    public:
    vector<int> preOrder(Node* root)  // also known as DFS Traversal
    {   vector<int> ans;
    
        stack<Node*>s;
        s.push(root);
        while(!s.empty()){
            Node* temp=s.top();
            s.pop();
            
            ans.push_back(temp->data);
            if(temp->right!=NULL) s.push(temp->right);
            if(temp->left!=NULL) s.push(temp->left);
        }
     return ans;
    }
};

*/