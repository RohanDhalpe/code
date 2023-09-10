/*
----------------------------------------------------------------------
 void inorder(TreeNode *root,vector<int>&a){
   if(root==NULL) return;
   inorder(root->left,a);
   a.push_back(root->data);
   inorder(root->right,a);
 }
 void preorder(TreeNode *root,vector<int>&b){
   if(root==NULL) return;
   b.push_back(root->data);
   preorder(root->left,b);
   preorder(root->right,b);
 }
 void postorder(TreeNode *root,vector<int>&c){
   if(root==NULL) return;
   postorder(root->left,c);
   postorder(root->right,c);
   c.push_back(root->data);
 }
vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>>res;
    vector<int>a;
    inorder(root,a);
    res.push_back(a);

    vector<int>b;
    preorder(root,b);
    res.push_back(b);

    vector<int>c;
    postorder(root,c);
    res.push_back(c);


    return res;
}
---------------------------------------------------------
*/