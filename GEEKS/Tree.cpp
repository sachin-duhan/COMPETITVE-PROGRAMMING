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

    TreeNode *insert(TreeNode *head, int x)
    {
        TreeNode *node = newNode(x);
        TreeNode *temp = NULL; // will be used to find the position of insertion!
        TreeNode *parent_of_temp = NULL;
        while (temp)
        {
            parent_of_temp = temp;
            if (temp->val < x)
                temp = temp->left;
            else
                temp = temp->right;
        }
        if (!parent_of_temp)
            temp = node;
        else if (parent_of_temp->val < x)
            parent_of_temp->left = node;
        else
            parent_of_temp->right = node;
        return parent_of_temp; // this is the node at which the new node is insterted!
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
