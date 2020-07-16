#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    int answer = 0;
    void helper(TreeNode *root, string val)
    {
        if (!root->right && !root->left)
        {
            val += to_string(root->val);
            answer += stoi(val);
            return;
        }
        val += to_string(root->val);
        if (root->right)
            helper(root->right, val);
        if (root->left)
            helper(root->left, val);
        return;
    }

public:
    int sumNumbers(TreeNode *root)
    {
        string curr_val = "";
        if (!root)
            return 0;
        helper(root, curr_val);
        return answer;
    }
};