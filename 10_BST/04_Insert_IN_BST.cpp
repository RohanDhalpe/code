/*

 public:
        Node* insert(Node* root, int val) {
         
        if(root==NULL) return new Node(val);
        if(root->data==val) return root;
        
        Node* curr=root;

        while(true)
        {   
            if(curr->data<val){
                if(curr->right!=NULL){ curr=curr->right;}
                else{ curr->right=new Node(val);
                   break;
                }
            }else{
                if(curr->left!=NULL){ curr=curr->left;}
                else{
                    curr->left=new Node(val);
                    break;
                }
            }

        }
      return root;
    }

*/