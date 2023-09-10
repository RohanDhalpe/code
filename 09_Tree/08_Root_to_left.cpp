 /*
 
 bool getPath(TreeNode* root, int B, vector<int>&res){
       if(root==NULL) return false;
       res.push_back(root->val);
       if(root->val==B) return true;
       if(getPath(root->left,B,res) || getPath(root->right,B,res)){
           return true;
       }
       
       res.pop_back();
       return false;
 }
 
vector<int> Solution::solve(TreeNode* root, int B) {
    vector<int>res;
    getPath(root,B,res);
    return res;
}

*/