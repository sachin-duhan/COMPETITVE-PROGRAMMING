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
class Solution
{
private:
    vector<TreeNode *> helper(int start, int end)
    {
        if (start > end)
            return vector<TreeNode *>(1, NULL);
        if (start == end)
            return vector<TreeNode *>(1, new TreeNode(start));
        vector<TreeNode *> result, left, right;
        for (int i = start; i <= end; i++)
        {
            left = helper(start, i - 1);
            right = helper(i + 1, end);
            for (TreeNode *lNode : left)
                for (TreeNode *rNode : right)
                    result.push_back(new TreeNode(i, lNode, rNode));
        }
        return result;
    }

public:
    vector<TreeNode *> generateTrees(int n)
    {
        if (n == 0)
            return vector<TreeNode *>();
        return helper(1, n);
    }
};