
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <queue>
typedef queue<node*> qi;
void levelOrder(node * root) {
    if(root==nullptr){
        return ;
    }
    node* temp;
    qi q;
    q.push(root);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ;
}
