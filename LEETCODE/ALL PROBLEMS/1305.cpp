#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
    vector<int> ans;
    void helper(TreeNode *root)
    {
        if (!root)
            return;
        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }

    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        helper(root1);
        helper(root2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};