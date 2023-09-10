/*

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int x) {
        while(root!=NULL && root->val!=x)
        {
           if(root->val>x){
               root=root->left;
           }else{
               root=root->right;
           }
        }
      return root;
    }
};
*/