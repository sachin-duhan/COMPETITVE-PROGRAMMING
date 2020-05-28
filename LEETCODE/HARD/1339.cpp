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

#define mod 1000000007

class Solution
{
public:
    vector<pair<int, int>> sums;
    int helper(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = helper(root->left);
        int r = helper(root->right);
        sums.push_back({l, r + root->val});
        sums.push_back({l + root->val, r});
        root->val += l + r;
        return root->val;
    }

    vector<int> nodes;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }

    TreeNode *buildTree(vector<int> nodes, int start, int end)
    {
        if (start <= end)
        {
            int mid = start + (end - start) / 2;
            TreeNode *temp = new TreeNode(nodes[mid]);
            temp->right = buildTree(nodes, mid + 1, end);
            temp->left = buildTree(nodes, start, mid - 1);
            return temp;
        }
        return NULL;
    }

    int maxProduct(TreeNode *root)
    {
        if (!root)
            return 0;
        TreeNode *newNode = root;
        if (!root->right || !root->left)
        {
            inorder(root);
            newNode = buildTree(nodes, 0, nodes.size() - 1);
        }

        helper(newNode);
        set<int, greater<int>> ans;
        for (auto a : sums)
            ans.insert(a.first * a.second);
        return *ans.begin() % mod;
    }
};

class Solution2 {
    vector<long long> sums;
public:
    int maxProduct(TreeNode* root) {
        long long total = sum(root);
        long long m = LLONG_MIN;
        for (long long i : sums) {
            long long prod = i * (total - i);
            if (prod > m)
                m = prod;
        }
        return (int)(m % 1000000007);
    }
    
    int sum(TreeNode* node) {
        if (!node)
            return 0;
        int n = node->val + sum(node->left) + sum(node->right);
        sums.push_back(n);
        return n;
    }
};
