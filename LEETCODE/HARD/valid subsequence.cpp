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

class Solution
{
public:
    bool helper(TreeNode *root, int index, vector<int> &arr)
    {
        if (!root || root->val != arr[index])
            return false;
        if (index == arr.size() - 1)
            return !root->right && !root->left && root->val == arr[index];
        else
            return helper(root->right, index + 1, arr) || helper(root->left, index + 1, arr);
    }

    // int height(TreeNode* root){
    //     if(!root)return 0;
    //     int l = height(root->left), r = height(root->right);
    //     return max(l,r)+1;
    // }

    bool isValidSequence(TreeNode *root, vector<int> &arr)
    {
        // int h = height(root);
        // if(arr.size() != h) return false;
        return helper(root, 0, arr);
    }
};