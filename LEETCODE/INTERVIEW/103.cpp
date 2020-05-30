#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    void bfs(TreeNode *root, int level, vector<vector<int>> &ans)
    {
        if (!root)
            return;
        if (ans.size() == level)
            ans.push_back({root->val});
        else
            ans[level].push_back(root->val);
        if (root->left)
            bfs(root->left, level + 1, ans);
        if (root->right)
            bfs(root->right, level + 1, ans);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        bfs(root, 0, ans);
        return ans;
    }
};
