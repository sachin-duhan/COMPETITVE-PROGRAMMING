#include<bits/stdc++.h>
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
public:
    bool ans = false;
    int vx,vy;
    int lx = -1,ly = -1;
    TreeNode *px = NULL, *py = NULL;
    void helper(TreeNode* root, TreeNode* parent, int level){
        if(!root) return;
        if(root->val == vx) { lx = level; px = parent; }
        else if(root->val == vy) { ly = level; py = parent; }

        if( lx == ly && lx != -1 && px != py ) ans = true;

        helper(root->right, root, level+1);
        helper(root->left, root, level+1);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        vx = x;
        vy = y;
        helper(root,NULL,0);
        return ans;
    }
};

