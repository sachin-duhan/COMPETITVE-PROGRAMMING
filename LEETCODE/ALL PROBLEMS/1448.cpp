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
private:
    int ans = 0;

public:
    void util(TreeNode *root, int maxi)
    {
        if (root->val >= maxi)
            ans++;
        if (root->left)
            util(root->left, max(maxi, root->val));
        if (root->right)
            util(root->right, max(maxi, root->val));
    }

    int goodNodes(TreeNode *root)
    {
        ans = 0;
        if (root)
            util(root, root->val);
        return ans;
    }
};