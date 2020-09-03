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
public:
    TreeNode *Tree(vector<int> &in, int x, int y, vector<int> &po, int a, int b)
    {
        if (x > y || a > b)
            return nullptr;
        TreeNode *node = new TreeNode(po[b]);
        int SI = x;
        while (node->val != in[SI])
            SI++;
        node->left = Tree(in, x, SI - 1, po, a, a + SI - x - 1);
        node->right = Tree(in, x, SI + 1, po, a+SI-x, b-1);
        return node;
    }

    TreeNode *buildTree(vector<int> &in, vector<int> &po)
    {
        return Tree(in, 0, in.size(), po, 0, po.size());
    }
};