// invert binary tree
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// approach two with shorter LOC!
TreeNode *invert(TreeNode *root)
{
    if (!root)
        return NULL;
    TreeNode *left = invertTree(root->left), *right = invertTree(root->right);
    root->right = left;
    root->left = right;
    return root;
}

// swapping approach!
void helper(TreeNode *root)
{
    if (!root)
        return;
    helper(root->left);
    helper(root->right);
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

TreeNode *invertTree(TreeNode *root)
{
    helper(root);
    return root;
}
