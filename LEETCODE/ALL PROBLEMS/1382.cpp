#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
public:
    vector<int> nodes;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }

    TreeNode *util(int start, int end)
    {
        if (start <= end)
        {
            int m = start + (end - start) / 2;
            TreeNode *temp = new TreeNode(nodes[m]);
            temp->right = util(m + 1, end);
            temp->left = util(start, m - 1);
            return temp;
        }
        return NULL;
    }

    TreeNode *balanceBST(TreeNode *root)
    {
        if (!root)
            return root;
        inorder(root);
        return util(0, nodes.size() - 1);
    }
};