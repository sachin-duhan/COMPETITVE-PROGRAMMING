#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
    vector<string> ans;
    void helper(TreeNode *root, string s)
    {
        if (!root)
            return;

        if (s == "")
            s += to_string(root->val);
        else
            s += "->" + to_string(root->val);

        if (!root->right && !root->left)
        {
            ans.push_back(s);
            return;
        }
        helper(root->left, s);
        helper(root->right, s);
    }

public:
    vector<string> binaryTreePaths(TreeNode *root)
    {
        helper(root, "");
        return ans;
    }
};
