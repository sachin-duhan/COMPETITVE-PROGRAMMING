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
class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        if (!root)
            return {};
        queue<pair<TreeNode *, int>> q;
        vector<vector<int>> ans;
        q.push({root, 1});
        while (!q.empty())
        {
            auto f = q.front();
            q.pop();
            if (ans.size() < f.second)
                ans.push_back({});
            ans[f.second - 1].push_back(f.first->val);
            if (f.first->right)
                q.push({f.first->right, f.second + 1});
            if (f.first->left)
                q.push({f.first->left, f.second + 1});
        }
        for (auto &a : ans)
            reverse(a.begin(), a.end());
        reverse(ans.begin(), ans.end());
        return ans;
    }
};