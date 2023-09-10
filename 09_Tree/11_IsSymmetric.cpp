/*
class Solution {
    private:
    bool isSymmetricchecker(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL){
            return left==right;
        }
        return (left->val==right->val) && isSymmetricchecker(left->left,right->right) && isSymmetricchecker(left->right,right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
      if(root==NULL) return true;
      return isSymmetricchecker(root->left,root->right);
    }
};
*/