#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
};

TreeNode *newTreeNode(int val = 0)
{
    TreeNode *node = new TreeNode();
    node->val = val;
    node->right = node->left = NULL;
    return node;
}

TreeNode *insert(TreeNode *root, int x)
{
    TreeNode *node = newTreeNode(x);
    TreeNode *temp = root; // will be used to find the position of insertion!
    TreeNode *parent_of_temp = NULL;
    while (temp)
    {
        parent_of_temp = temp;
        if (temp->val < x)
            temp = temp->left;
        else
            temp = temp->right;
    }
    if (!parent_of_temp)
        temp = node;
    else if (parent_of_temp->val < x)
        parent_of_temp->left = node;
    else
        parent_of_temp->right = node;
    return parent_of_temp; // this is the node at which the new node is insterted!
}

vector<vector<int>> levelOrder(TreeNode *root) // this takes in extra space!
{
    queue<pair<TreeNode *, int>> q;
    vector<vector<int>> ans(10);
    if (!root)
        return ans;
    ans.push_back(vector<int>({root->val}));
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        TreeNode *currNode = q.front().first;
        int level = q.front().second;
        if (level > ans.size())
            ans.resize(2 * level);
        ans[level].push_back(currNode->val);
        if (currNode->right)
            q.push(make_pair(currNode->right, level + 1));
        if (currNode->left)
            q.push(make_pair(currNode->left, level + 1));
        q.pop();
    }
    return ans;
}

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    inflate(ans, root, 1);
    return ans;
}

void inflate(vector<vector<int>> &ans, TreeNode *node, int depth)
{
    if (!node)
        return;
    if (ans.size() < depth)
    {
        ans.push_back({});
    }
    ans[depth - 1].push_back(node->val);
    inflate(ans, node->left, depth + 1);
    inflate(ans, node->right, depth + 1);
}

int main()
{
    TreeNode *root = NULL;
    vector<vector<int>> solution;
    for (auto arr : solution)
    {
        for (auto el : arr)
            cout << el << " ";
        cout << endl;
    }
    return 0;
}