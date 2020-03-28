#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
};

int sovle(TreeNode *root, int L, int R)
{
    TreeNode *temp = root;
    queue<TreeNode *> q;
    q.push(temp);
    int ans = 0;
    while (!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();
        if (curr->right)
            q.push(curr->right);
        if (curr->left)
            q.push(curr->left);
        if (curr->val <= R && curr->val >= L)
            ans += curr->val;
    }
    return ans;
}

/*

Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.

 

Example 1:

Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32
Example 2:

Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23

*/