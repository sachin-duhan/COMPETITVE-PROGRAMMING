#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{

    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *util(TreeNode *root, int val)
{
    if (!root)
        root = new TreeNode(val);
    else
    {
        if (root->val < val)
            util(root->left, val);
        else
            util(root->right, val);
    }
    return root;
}

TreeNode *builtTree(vector<int> arr)
{
    TreeNode *root = NULL;
    for (int a : arr)
        util(root, a);
    return root;
}

int main()
{
    vector<int> input{1, 2, 3, 4, 5, 6, 7};
    TreeNode *root = builtTree(input);
    return 0;
}