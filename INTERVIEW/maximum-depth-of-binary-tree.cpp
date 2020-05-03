// jst adding the solution of the problem

int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return left > right ? left + 1 : right + 1;
}