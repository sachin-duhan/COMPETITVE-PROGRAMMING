#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
};

bool helper(TreeNode *root, TreeNode *left, TreeNode *right)
{
    if (!root)
        return true;

    if (right && root->val >= right->val)
        return false;
    if (left && root->val <= left->val)
        return false;

    return helper(root->left, left, root) && helper(root->right, root, right);
}

bool isValidBST(TreeNode *root)
{
    return helper(root, nullptr, nullptr);
}