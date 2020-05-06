#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Tree;
//Insert Iterative
Tree *insertIterative(Tree *root,int data){
    Tree *temp,*parent;
    Tree *newNode=new Tree();
    newNode->data=data;
    newNode->left=nullptr;
    newNode->right=nullptr;
    if(root==nullptr){
        root=newNode;
        return root;
    }else{
        temp=root;
        while(temp){
            parent=temp;
            if(temp->data > data){
                temp=temp->left;
            }else if(temp->data < data){
                temp=temp->right;
            }else{
                cout<<"The node with "<<data<<" is already present\n";
                return root;
            }
        }
    }
    if(parent->data > data){
        parent->left=newNode;
    }else{
        parent->right=newNode;
    }
    return root;
}

//Insert Recursive
Tree *insertRecursive(Tree *root,int data){
    if(root==nullptr){
        Tree *newNode=new Tree();
        newNode->data=data;
        newNode->left=nullptr;
        newNode->right=nullptr;
        root=newNode;
        return root;
    }else{
        Tree *cur;
        if(root->data > data){
             cur=insertRecursive(root->left,data);
             root->left=cur;
        }else if(root->data < data){
            cur=insertRecursive(root->right,data);
            root->right=cur;
        }else{
            cout<<"The node with "<<data<<" is present in the tree\n";
            return root;
        }
    }
    return root;
}

//Traversal
void inOrder(Tree *root){
    if(root==nullptr){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Tree *root){
    if(root==nullptr){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Tree *root){
    if(root==nullptr){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//Delete Node
Tree *deleteNode(Tree *root,int data){
    if(root==nullptr){
        cout<<"The Tree is Empty\n";
        return root;
    }
    Tree *cur,*parent,*q,*successor;
    parent=nullptr;cur=root;
    while(cur){
        if(cur->data==data){
            break;
        }
        parent=cur;
        cur=(cur->data > data)?cur->left:cur->right;
    }
    if(cur==nullptr){
        cout<<data<<" is not present in the Tree\n";
        return root;
    }
    if(cur->left==nullptr){
        q=cur->right;
    }else if(cur->right==nullptr){
        q=cur->left;
    }else{
        successor=cur->right;
        while(successor->left){
            successor=successor->left;
        }
        successor->left=cur->left;
        q=cur->right;
    }
    if(parent==nullptr){
        cout<<"Delete "<<data<<" from the tree\n";
        return root;
    }
    if(cur==parent->left){
        parent->left=q;
    }else{
        parent->right=q;
    }
    return root;
}

//ALgorithm To convert a tree to its mirror
Tree *mirrorTransform(Tree *root){
    Tree *temp;
    if(root){
        mirrorTransform(root->left);
        mirrorTransform(root->right);
        //swap the nodes
        swap(root->left,root->right);
    }
    return root;
}

//Algorithm to check if two trees are mirror of each other
int areMirrors(Tree *root1,Tree *root2){
    if(root1==nullptr && root2==nullptr)
        return 1;
    if(root1==nullptr || root2==nullptr)
        return 0;
    if(root1->data!=root2->data)
        return 0;
    else return(areMirrors(root1->left,root2->right)&&areMirrors(root1->right,root2->left));
}

int main(){
    Tree *root=nullptr;
    root=insertRecursive(root,100);
    root=insertRecursive(root,50);
    root=insertRecursive(root,150);
    root=insertRecursive(root,40);
    root=insertRecursive(root,60);
    Tree *temp=nullptr;
    temp=insertRecursive(temp,100);
    temp=insertRecursive(temp,50);
    temp=insertRecursive(temp,150);
    temp=insertRecursive(temp,40);
    temp=insertRecursive(temp,60);
    inOrder(root);
    cout<<"\nMirror Transformation\n";
    Tree *mirrorRoot=root;
    mirrorRoot=mirrorTransform(mirrorRoot);
    inOrder(mirrorRoot);
    cout<<"\n";
    if(areMirrors(temp,mirrorRoot)){
        cout<<"Both the Tree are mirror of each other\n";
    }else{
        cout<<"They are not mirror of each other\n";
    }
    return 0;
}
