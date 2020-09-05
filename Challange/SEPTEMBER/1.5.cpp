#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *right, *left;
    TreeNode() : val(0), right(NULL), left(NULL){};
    TreeNode(int x) : val(x), right(NULL), left(NULL){};
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){};
};

class Solution
{
private:
    multiset<int> sorted_val;
    void traverse_tree(TreeNode *root);

public:
    vector<int> solve(TreeNode *root1, TreeNode *root2);
};

void Solution::traverse_tree(TreeNode *root)
{
    if (!root)
        return;
    this->sorted_val.insert(root->val);
    this->traverse_tree(root->left);
    this->traverse_tree(root->right);
}

vector<int> Solution::solve(TreeNode *root1, TreeNode *root2)
{
    this->traverse_tree(root1);
    this->traverse_tree(root2);
    vector<int> ans(this->sorted_val.begin(), this->sorted_val.end());
    return ans;
}

int main()
{
    return 0;
}

// entering jugaad
class Solution2
{
    vector<int> ans;
    void helper(TreeNode *root)
    {
        if (!root)
            return;
        ans.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }

public:
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        helper(root1);
        helper(root2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};