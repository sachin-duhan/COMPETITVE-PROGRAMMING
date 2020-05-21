
//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    vector<int> nums;
    void inorder(TreeNode* root){
        if(!root)return ;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp = root;
        inorder(temp);
        return nums[(k-1)%nums.size()];
    }
};
