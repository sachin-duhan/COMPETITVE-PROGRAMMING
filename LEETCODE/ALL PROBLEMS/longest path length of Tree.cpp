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
private:
    int ans = 0;

public:
    int helper(TreeNode *root)
    {
        if (!root)
            return 0;
        int l_val = root->left ? helper(root->left) : 0;
        int r_val = root->right ? helper(root->right) : 0;
        ans = max(ans, l_val + r_val + 1);
        return max(l_val, r_val) + 1;
    }

    int widthOfBinaryTree(TreeNode *root)
    {
        helper(root);
        return ans;
    }
};