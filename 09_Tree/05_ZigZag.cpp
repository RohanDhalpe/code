/*
vector<int> zigzagTreeTraversal(TreeNode<int> *root)
{
    vector<int>res;
    if(root==NULL) return res;
    
    queue<TreeNode<int>*>q;
    q.push(root);

    bool leftToRight=true;
      while(!q.empty())
     { 
         int n=q.size();
        vector<int>v(n);

       for(int i=0;i<n;i++)
       {
         TreeNode<int>* temp=q.front();
         q.pop();
         
         int index = (leftToRight) ? i :(n-1-i);
         v[index]= temp->data;

        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
       }

        leftToRight=!leftToRight;
       
          for(auto it:v){
             res.push_back(it);
          }
     }
 return res;
}

*/