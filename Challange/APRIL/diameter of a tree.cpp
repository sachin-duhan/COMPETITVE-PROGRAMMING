#include<bits/stdc++.h>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    int ans;
    int height(TreeNode *root)
    {
        if (!root)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        ans = max(ans, lh + rh + 1);
        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        ans = 1;
        height(root);
        return ans - 1;
    }
};