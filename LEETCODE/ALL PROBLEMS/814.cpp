#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *pruneTree(TreeNode *root)
    {
        if (!root)
            return root;
        if (root->right)
            root->right = pruneTree(root->right);
        if (root->left)
            root->left = pruneTree(root->left);
        if (!root->right && !root->left && root->val == 0)
            return NULL;
        return root;
    }
};