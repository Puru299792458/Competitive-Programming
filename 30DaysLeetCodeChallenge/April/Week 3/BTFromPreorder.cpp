#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

typedef vector<int> vi;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};


TreeNode* BT(vi v,int *cI,int l,int h,int n){
    int i;
    if(*cI>=n || l>h) return NULL;
    TreeNode *root = new TreeNode(v[*cI]);
    *cI +=1;
    if (l==h) return root;
    for(i=l;i<=h;i++){
        if(v[i]>root->val) break;
    }
    root->left = BT(v,cI,*cI,i-1,n);
    root->right = BT(v,cI,i,h,n);
    return root;
}

TreeNode* constructBT(vi v){
    int curInd=0;
    return BT(v,&curInd,0,v.size()-1,v.size());
}

int main(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    TreeNode *root = constructBT(v);
    return 0;
}
