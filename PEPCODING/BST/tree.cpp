#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *right, *left;
    TreeNode(int val) : val(val), left(NULL), right(NULL){};
    TreeNode(int val, TreeNode *left, TreeNode *right) : val(val), left(left), right(right){};
};

class BinaryTree
{
    void print_helper(TreeNode *root)
    {
        if (!root)
            return;
        print_helper(root->left);
        cout << root->val << " ";
        print_helper(root->right);
    }

    int _sizeHelper(TreeNode *root)
    {
        if (!root)
            return 0;
        return _sizeHelper(root->left) + _sizeHelper(root->right) + 1;
    }

    int _heightHelper(TreeNode *root)
    {
        if (!root)
            return 0;
        return max(_heightHelper(root->left), _heightHelper(root->right)) + 1;
    }

    TreeNode *make_treeHelper(vector<int> nums, int low, int high)
    {
        if (high < low)
            return NULL;
        int mid = low + (high - low) / 2;
        int data = nums[mid];
        auto lc = make_treeHelper(nums, low, mid - 1);
        auto rc = make_treeHelper(nums, mid + 1, high);
        TreeNode *newNode = new TreeNode(data, lc, rc);
        return newNode;
    }

public:
    TreeNode *root;
    BinaryTree(vector<int> nums, int lo, int hi)
    {
        this->root = make_treeHelper(nums, lo, hi);
    }

    void print() { print_helper(root); }
    int size()
    {
        if (!root)
            return 0;
        return _sizeHelper(root);
    }
    int height()
    {
        if (!root)
            return 0;
        return _heightHelper(root);
    }
};

int main()
{
    vector<int> nums({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13});
    BinaryTree tree(nums, 0, nums.size() - 1);
    tree.print();
    return 0;
}