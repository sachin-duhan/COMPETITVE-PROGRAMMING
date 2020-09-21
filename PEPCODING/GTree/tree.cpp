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

    Generic_Tree(int val) { this->root->val = val; };
    Generic_Tree(vector<int> tree)
    {
        stack<TreeNode *> s;
        for (auto val : tree)
        {
            TreeNode *temp = new TreeNode(val);
            if (temp->val == -1)
                s.pop();
            else
            {
                if (s.empty())
                    this->root = temp;
                else
                    s.top()->children.push_back(temp);
                s.push(temp);
            }
        }
    }

    void print(TreeNode *root)
    {
        if (!root)
            return;
        string level = root->val + " -> ";
        for (auto child : root->children)
            level += child->val + ", ";
        for (auto child : root->children)
            this->print(child);
    }
};

int main()
{
    return 0;
}
