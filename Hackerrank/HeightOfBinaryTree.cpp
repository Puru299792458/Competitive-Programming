int height(Node* root) {
       int leftht,rightht;
       if(root==nullptr){
           return -1;
       }else{
           leftht=height(root->left);
           rightht=height(root->right);
           if(leftht<rightht){
               return (rightht+1);
           }else{
               return (leftht+1);
           }
       }
   }
