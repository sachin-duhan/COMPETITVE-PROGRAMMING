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

class FindElements
{
    map<int, bool> m;
    void helper(TreeNode *root, int index = 0)
    {
        if (!root)
            return;
        m[index] = true;
        helper(root->left, 2 * index + 1);
        helper(root->right, 2 * index + 2);
    }

public:
    FindElements(TreeNode *root)
    {
        helper(root);
    }

    bool find(int target)
    {
        return m.find(target) != m.end();
    }
};
