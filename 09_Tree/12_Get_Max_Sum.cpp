/*
class Solution {

public:
   int getMaxSum(TreeNode* root,int &maxi) {
        if(root==NULL) return 0;

        int ls=max(0,getMaxSum(root->left,maxi));
        int rs=max(0,getMaxSum(root->right,maxi));

        maxi=max(maxi,ls+rs+root->val);

        return max(ls,rs) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        getMaxSum(root,maxi);
        return maxi;
    }
};
*/