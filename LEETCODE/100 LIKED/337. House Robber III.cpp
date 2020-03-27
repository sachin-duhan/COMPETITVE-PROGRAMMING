/*
The thief has found himself a new place for his thievery again. 
There is only one entrance to this area, called the "root." Besides the root, 
each house has one and only one parent house. After a tour, the smart thief realized that 
"all houses in this place forms a binary tree". It will automatically contact the police if 
two directly-linked houses were broken into on the same night.

Determine the maximum amount of money the thief can rob tonight without alerting the police.

Example 1:

Input: [3,2,3,null,3,null,1]

     3
    / \
   2   3
    \   \ 
     3   1

Output: 7 
Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7.
Example 2:

Input: [3,4,5,1,3,null,1]

     3
    / \
   4   5
  / \   \ 
 1   3   1

Output: 9
Explanation: Maximum amount of money the thief can rob = 4 + 5 = 9.

*/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
};

int rob(TreeNode *root)
{
    queue<pair<TreeNode *, int>> q;
    map<int, int> m;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        TreeNode *curr = q.front().first;
        int level = q.front().second;
        q.pop();
        m[level] += curr->val;
        if (curr->left)
            q.push(make_pair(curr->left, level + 1));
        if (curr->right)
            q.push(make_pair(curr->right, level + 1));
    }
    int oddy = 0, eveny = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (itr->first % 2 == 0)
            eveny += itr->second;
        else
            oddy += itr->first;
    }
    return max(oddy, eveny);
}

int anotherSolution(TreeNode *root)
{
    auto res = dfs(root);
    return max(res.first, res.second);
}

pair<int, int> dfs(TreeNode *root)
{
    if (root == NULL)
        return make_pair(0, 0);

    auto left = dfs(root->left);
    auto right = dfs(root->right);

    return make_pair(root->val + left.second + right.second, max(left.first, left.second) + max(right.first, right.second));
}
