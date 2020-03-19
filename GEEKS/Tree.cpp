#include<iostream>
using namespace std;

struct Tree
{
    int val;
    Tree *right = nullptr;
    Tree *left = nullptr;
};

// finding size of the Tree
int size_of_tree(Tree *root)
{
    if (!root)
        return 0;
    return size_of_tree(root->right) + 1 + size_of_tree(root->left);
}

// TREE TRAVERSAL
void PRINT_INORDER_TRAVERSAL(Tree *root)
{
    if(!root)return;
    PRINT_INORDER_TRAVERSAL(root->right);
    cout << root->val << " ";
}
