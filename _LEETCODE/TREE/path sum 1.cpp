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

class Solution
{
public:
    bool hasPathSum(TreeNode *root, const int sum, int curr = 0)
    {
        if (!root)
            return false;
        curr += root->val;
        if (curr == sum && !root->right && !root->left)
            return true;
        return hasPathSum(root->left, sum, curr) || hasPathSum(root->right, sum, curr);
    }
};
