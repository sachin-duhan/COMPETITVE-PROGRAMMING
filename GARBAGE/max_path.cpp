#include<bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
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
    void helper(TreeNode *root, int sum)
    {
        if (!root)
            return;
        ans = max(ans, sum);
        if (root->right)
        {
            helper(root->right, sum + root->right->val);
            helper(root->right, root->right->val);
        }
        if (root->left)
        {
            helper(root->left, root->left->val);
            helper(root->left, sum + root->left->val);
        }
    }

    int maxPathSum(TreeNode *root)
    {
        ans = INT_MIN;
        helper(root, root->val);
        return ans;
    }
};