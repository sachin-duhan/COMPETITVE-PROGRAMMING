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

    pair<int, int> _diameterHelper(TreeNode *root) // return {diameter, height};
    {
        if (!root)
            return {0, 0};
        auto pl = _diameterHelper(root->left);
        auto pr = _diameterHelper(root->right);

        int height = max(pl.second, pr.second) + 1; // second = height
        int diameter = max(pr.second + pl.second + 2, max(pl.first, pr.first)); // first = diameter;
        return {diameter, height};
    }

public:
    TreeNode *root;
    BinaryTree(vector<int> nums)
    {
        if (nums.size() == 0)
            return;
        this->root = new TreeNode(nums[0]);
        stack<pair<TreeNode *, int>> s;
        s.push({root, 1});
        for (auto a : nums)
        {
            assert(!s.empty()); // checking stack is not empty
            if (a == -1)
            { // vector cannot contain null, so -1 marks null
                s.top().second++;
                continue;
            }

            int state = s.top().second;
            if (state == 1) // add to left
            {
                TreeNode *temp = new TreeNode(a);
                s.top().first->left = temp;
                s.top().second++;
                s.push({temp, 1});
            }
            else if (state == 2) // add to right
            {
                TreeNode *temp = new TreeNode(a);
                s.top().first->right = temp;
                s.top().second++;
                s.push({temp, 1});
            }
            else
                s.pop();
        }
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

    int diameter()
    {
        if (!root)
            return 0;
        return _diameterHelper(root).first;
    }
};

int main()
{
    BinaryTree tree({1, 2, 3, 4, 5, 6, 7});
    tree.print();
    return 0;
}