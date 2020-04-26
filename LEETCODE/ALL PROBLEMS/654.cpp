#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums, int start = 0, int stop = INT_MAX)
    {
        if (stop == INT_MAX)
            stop = nums.size();
        if (start > stop)
            return nullptr;
        auto middle = max_element(nums.begin(), nums.end() + stop + 1) - nums.begin();
        TreeNode *root = new TreeNode(nums[middle]);
        root->left = constructMaximumBinaryTree(nums, start, middle + 1);
        root->right = constructMaximumBinaryTree(nums, middle + 1, stop);
        return root;
    }
};