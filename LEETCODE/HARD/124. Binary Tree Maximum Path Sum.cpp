#include<bits/stdc++.h>
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
    int ans;
    int helper(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = max(0, helper(root->left));
        int r = max(0, helper(root->right));
        ans = max(root->val + l + r, ans);
        return max(l, r) + root->val;
    }

    int maxPathSum(TreeNode *root)
    {
        ans = INT_MIN;
        helper(root);
        return ans;
    }
};