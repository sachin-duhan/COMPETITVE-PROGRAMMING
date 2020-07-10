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

class Solution
{
    int ans;
    map<int, int> m;
    void DFS(TreeNode *temp, int depth, long index)
    {
        if (!temp)
            return;
        if (m.find(depth) == m.end())
            m[depth] = index;
        int x = index - m[depth] + 1;
        ans = max(ans, x);
        DFS(temp->left, depth + 1, 2 * index);
        DFS(temp->right, depth + 1, 2 * index + 1);
    }

public:
    int widthOfBinaryTree(TreeNode *root)
    {
        ans = 0;
        DFS(root, 0, 0);
        return ans;
    }
};