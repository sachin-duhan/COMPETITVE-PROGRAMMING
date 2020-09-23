#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    vector<TreeNode *> children;
    TreeNode() : val(-1), children({}){};
    TreeNode(int x) : val(x), children({}){};
    TreeNode(int x, vector<TreeNode *> children) : val(x), children(children){};
};

class Generic_Tree
{
public:
    TreeNode *root;
    Generic_Tree(vector<int> tree)
    {
        stack<TreeNode *> s;
        for (auto val : tree)
        {
            if (val == -1)
                s.pop();
            else
            {
                TreeNode *temp = new TreeNode(val);
                if (s.empty())
                    this->root = temp;
                else
                    s.top()->children.push_back(temp);
                s.push(temp);
            }
        }
    }

    int height(TreeNode *root)
    {
        if (root->children.empty())
            return 1;
        int curr_max_height = 0;
        for (auto child : root->children)
        {
            int ch = height(child);
            curr_max_height = max(curr_max_height, ch);
        }
        return curr_max_height + 1;
    }

    int size()
    {
        int _size = 0;
        if (!this->root)
            return _size;
        queue<TreeNode *> q;
        q.push(this->root);
        while (!q.empty())
        {
            auto front = q.front();
            q.pop();
            for (auto child : front->children)
                q.push(child);
            _size++;
        }
        return _size;
    }
};

void print(TreeNode *root)
{
    if (!root)
        return;
    string level = to_string(root->val) + " -> ";
    for (auto child : root->children)
        level += to_string(child->val) + ", ";
    cout << level << endl;
    for (auto child : root->children)
        print(child);
}

int main()
{
    vector<int> tree = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 170, -1, -1, -1};
    Generic_Tree mtree({0});
    cout << mtree.height(mtree.root) << endl;
    return 0;
}
