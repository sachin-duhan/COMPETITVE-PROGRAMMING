#include<iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left = nullptr, *right = nullptr;
};

TreeNode *sortedArrayToBST(vector<int> &nums)
{

    int size = nums.size() - 1;
    if (size == -1)
        return NULL;
    TreeNode *root = convert(nums, 0, size, size);
    return root;
}

TreeNode *convert(vector<int> &nums, int i, int j, int size)
{
    if (i > j || j > size)
        return NULL;
    TreeNode *node = new TreeNode(nums[(i + j) / 2]);
    node->left = convert(nums, i, (i + j) / 2 - 1, size);
    node->right = convert(nums, (i + j) / 2 + 1, j, size);
    return node;
}