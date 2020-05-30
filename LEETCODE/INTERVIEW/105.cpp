#include <bits/stdc++.h>
using namespace std;

//Construct Binary Tree from Preorder and Inorder Traversal
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *helper(vector<int> &pre, vector<int> &ino, int start, int end, int &pos)
{
    TreeNode *root = nullptr;
    if (start <= end)
    {
        int i = 0;
        for (i = start; i <= end; i++)
            if (pre[i] == ino[pos])
                break;
        root = new TreeNode(ino[i]);
        pos++;
        root->left = helper(pre, ino, start, i - 1, pos);
        root->right = helper(pre, ino, i+1, end, pos);
    }
    return root;
}
TreeNode *main(vector<int> pre, vector<int> ino)
{
    int pos = 0;
    return helper(pre, ino, 0, pre.size(), pos);
}
