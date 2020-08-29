#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    void helper(TreeNode* root, int level, vector<int> &ans){
        if(!root) return;
        if(level >= ans.size()){
            ans.push_back(root->val);
            helper(root->right,level+1, ans);
            helper(root->left,level+1, ans);
            return;
        }
        helper(root->right, level+1, ans);
        helper(root->left, level+1, ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> view;
        helper(root,0,view);
        return view;
    }
};
