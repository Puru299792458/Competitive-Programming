//Driver Function
#include "headers.hpp"

int main(){
    Tree *root=nullptr;
    root=insertIterative(root,12);
    root=insertIterative(root,10);
    root=insertIterative(root,13);
    root=insertRecursive(root,9);
    root=insertRecursive(root,90);
    root=insertRecursive(root,100);
    cout<<"Inorder Traversal\n";
    inOrder(root);
    cout<<"\nPreorder Traversal\n";
    preOrder(root);
    cout<<"\nPostorder Traversal\n";
    postOrder(root);
    cout<<"\n";
    root=deleteNode(root,100);
    root=deleteNode(root,13);
    cout<<"Inorder Traversal\n";
    inOrder(root);
    cout<<"\nPreorder Traversal\n";
    preOrder(root);
    cout<<"\nPostorder Traversal\n";
    postOrder(root);
    cout<<"\n";
    return 0;
}
