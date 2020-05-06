/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    Node *lca(Node *root, int v1,int v2) {
        Node *left,*right;
        if(root==nullptr){
            return root;
        }
        if(root->data==v1 || root->data==v2){
            return root;
        }
        left=lca(root->left,v1,v2);
        right=lca(root->right,v1,v2);
        if(left && right)
            return root;
        else
            return (left?left:right);
    }
