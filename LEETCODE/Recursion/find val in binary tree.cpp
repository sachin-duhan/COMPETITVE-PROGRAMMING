
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
    TreeNode *helper(TreeNode *temp, int val)
    {
        if (!temp)
            return nullptr;
        if (temp->val == val)
            return temp;
        else if (val < temp->val)
            return helper(temp->left, val);
        else
            return helper(temp->right, val);
    }
    TreeNode *searchBST(TreeNode *root, int val)
    {
        TreeNode *temp = root;
        return helper(temp, val);
    }
};