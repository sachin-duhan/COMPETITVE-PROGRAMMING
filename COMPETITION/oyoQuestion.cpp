#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxSubBSTCount = 1;
vector<int> solve(TreeNode *root)
{
    if (!root)
        return {INT_MIN, INT_MAX, 0};
    vector<int> lsa(3), rsa(3);
    if (root->left)
        lsa = solve(root->left);
    else
        lsa = {root->val, root->val, 1};

    if (root->right)
        rsa = solve(root->right);
    else
        rsa = {root->val, root->val, 1};

    int count = 1;
    if (root->left)
        count += lsa[2];
    if (root->right)
        count += rsa[2];

    maxSubBSTCount = max(count, maxSubBSTCount);

    return {min(lsa[0], rsa[0]), max(lsa[1], rsa[1]), count};
}

int main()
{
    return 0;
}
