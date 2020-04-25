#include<bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    vector<int> ans;
    void helper(TreeNode *root, int l)
    {
        if (!root)
            return;
        if (l > ans.size())
            ans.push_back(root->val);
        else
            ans[l] += root->val;
        if (root->left)
            helper(root->left, l + 1);
        if (root->right)
            helper(root->right, l + 1);
    }

    int deepestLeavesSum(TreeNode *root)
    {
        if(!root)return 0;
        helper(root, 0);
        return ans[ans.size() - 1];
    }
};