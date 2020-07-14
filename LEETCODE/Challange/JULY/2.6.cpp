
//Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    bool isSameTree(TreeNode *q, TreeNode *p)
    {
        if (!q && !p)
            return true;
        if ((!q && p) || (q && !p))
            return false;
        if ((!q->right && p->right) || (q->right && !p->right) || (!q->left && p->left) || (q->left && !p->left))
            return false;
        if (q->val != p->val)
            return false;
        return isSameTree(q->right, p->right) && isSameTree(q->left, p->left);
    }
};