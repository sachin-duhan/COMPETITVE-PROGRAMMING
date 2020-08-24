#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode() : val(0),right(nullptr), left(nullptr){};
    TreeNode(int x) : val(x),right(nullptr), left(nullptr){};
    TreeNode(int x,TreeNode* left,TreeNode* right): val(x), right(right),left(left){}; 
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root, bool isLeft = false) {
        if(!root) return 0;
        int ans = 0;
        if(isLeft && !root->right && !root->left) ans += root->val;
        ans += sumOfLeftLeaves(root->right,false);
        ans += sumOfLeftLeaves(root->left,true);
        return ans;
    }
};