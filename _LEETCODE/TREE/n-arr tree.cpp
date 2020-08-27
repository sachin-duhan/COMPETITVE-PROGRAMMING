#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    vector<Node *> children;
    Node() : val(0), children(vector<Node *>()){};
    Node(int val) : val(val), children(vector<Node *>()){};
    Node(int val, vector<Node *> child) : val(val), children(child){};
};

class Solution
{

    void _preorder_helper(Node *root, vector<int> &ans)
    {
        if (!root)
            return;
        ans.push_back(root->val);
        for (auto child : root->children)
            _preorder_helper(child, ans);
    }

public:
    vector<int> preorder(Node *root)
    {
        vector<int> ans;
        _preorder_helper(root, ans);
        return ans;
    }

    vector<int> preorder_itreative(Node *root)
    {
        vector<int> ans;
        stack<Node *> s;
        s.push(root);
        while (!s.empty())
        {
            Node *curr = s.top();
            s.pop();

            ans.push_back(curr->val);
            for (auto itr = curr->children.rbegin(); itr != curr->children.rend(); itr++)
                s.push(*itr);
        }
        return ans;
    }
};