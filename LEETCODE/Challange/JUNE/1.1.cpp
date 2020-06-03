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

TreeNode *invert(TreeNode *root)
{

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
