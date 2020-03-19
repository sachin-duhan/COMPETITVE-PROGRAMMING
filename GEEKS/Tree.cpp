#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode *newNode(int x)
    {
        TreeNode *Node = new TreeNode();
        Node->val = x;
        Node->right = NULL;
        Node->left = NULL;
        return Node;
    }

};

int size(TreeNode *root)
{
    if (!root)
        return 0;
    return size(root->right) + 1 + size(root->left);
}

void PRINT_INORDER_TRAVERSAL(const TreeNode *root)
{
    if (!root)
        return;
    PRINT_INORDER_TRAVERSAL(root->left);
    cout << root->val << " ";
    PRINT_INORDER_TRAVERSAL(root->right);
}

void PRINT_POSTORDER_TRAVERSAL(const TreeNode *root)
{
    if (!root)
        return;
    PRINT_INORDER_TRAVERSAL(root->left);
    PRINT_INORDER_TRAVERSAL(root->right);
    cout << root->val << " ";
}

void PRINT_PREORDER_TRAVERSAL(const TreeNode *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    PRINT_INORDER_TRAVERSAL(root->left);
    PRINT_INORDER_TRAVERSAL(root->right);
}
