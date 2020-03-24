#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
};

TreeNode *mergerTree(TreeNode *t1, TreeNode *t2)
{
    if (!t1 && !t2)
        return NULL;
    TreeNode *root = new TreeNode((t1 ? t1->val : 0) + (t2 ? t2->val : 0));
    root->right = mergerTree((t1->right ? t1->right : NULL), (t2->right ? t2->right : NULL));
    root->left = mergerTree((t1->left ? t1->left : NULL), (t2->left ? t2->left : NULL));
    return root;
}

int main()
{

    return 0;
}