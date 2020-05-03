struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int max(int a,int b){return a>b?a:b;}

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int lh = maxDepth(root->left)+1;
        int rh = maxDepth(root->right)+1;
        return max(lh,rh);
    }
};