struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class ans
{
public:
    int sum = 0;
    void helper(TreeNode* root){
        if(!root)return;
        helper(root->right);
        sum += root->val;
        root->val = sum;
        helper(root->left);
    }

    TreeNode* solve(TreeNode* root){
        helper(root);
        return root;
    }
};

