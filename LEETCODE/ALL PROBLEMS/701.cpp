#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class solution
{
public:
    TreeNode *insert(TreeNode *root, int val)
    {
        TreeNode *temp = new TreeNode(val);
        if (!root)
            return (root = temp);
        if (val < root->val)
        {
            if (!root->left)
                root->left = temp;
            else
                insert(root->left, val);
        }
        else
        {
            if (!root->right)
                root->right = temp;
            else
                insert(root->right, val);
        }
        return root;
    }
};
