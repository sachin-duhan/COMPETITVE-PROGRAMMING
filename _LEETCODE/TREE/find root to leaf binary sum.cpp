#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int val) : val(val), right(NULL), left(NULL){};
    TreeNode(int val, TreeNode *right, TreeNode *left) : val(val), right(right), left(left){};
};

class Solution {
    int ans = 0;
    
    int to_num(string s){
        int dec_val = 0;
        for(int j = s.length()-1,i=0;j>=0;j--)
            dec_val += (s[j]-'0')*pow(2,i++);
        return dec_val;
    }
    
    void _helper(TreeNode* root, string s){
        if(!root) return;
        s += to_string(root->val);
        if(!root->right && !root->left){
            ans += to_num(s);
            return;
        }
        _helper(root->right,s);
        _helper(root->left,s);
    }
    
public:
    int sumRootToLeaf(TreeNode* root) {
        _helper(root,"");
        return ans;
    }
};
