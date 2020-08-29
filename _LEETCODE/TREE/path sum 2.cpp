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
    vector<vector<int>> ans;
    void helper(TreeNode *root, vector<int> temp, int curr, int target)
    {
        if (!root)
            return;
        temp.push_back(root->val);
        curr += root->val;
        if (curr == target && !root->right && !root->left)
        {
            ans.push_back(temp);
            return;
        }
        helper(root->left, temp, curr, target);
        helper(root->right, temp, curr, target);
    }

public:
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {
        vector<int> temp;
        helper(root, temp, 0, sum);
        return ans;
    }
};
