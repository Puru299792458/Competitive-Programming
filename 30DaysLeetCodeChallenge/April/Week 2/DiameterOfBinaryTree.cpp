#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution{
public:
    Solution(){}
    static int diameterOfBinaryTree(TreeNode *root){
        if (root==NULL) return 0;
        int lHgt = heightOfTree(root->left);
        int rHgt = heightOfTree(root->right);
        int lDia = diameterOfBinaryTree(root->left);
        int rDia = diameterOfBinaryTree(root->right);
        return max(lHgt+rHgt, max(lDia,rDia));
    }
private:
    static int heightOfTree(TreeNode *root){
        if (root == NULL){
            return 0;
        }
        return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    //root->right->right = new TreeNode(40);
    //root->right->left = new TreeNode(50);
    Solution s;
    cout<<s.diameterOfBinaryTree(root);
    return 0;
}
