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
    pair<int, int> ceil_floor_ans = {INT_MIN, INT_MAX};

    pair<int, int> cf(int val)
    {
        ceil_floor_helper(root, val);
        return this->ceil_floor_ans;
    }

    void ceil_floor_helper(TreeNode *root, int val)
    {
        if (root->val == val)
            return;
        if (root->val < ceil_floor_ans.first)
            ceil_floor_ans.first = max(root->val, ceil_floor_ans.first);
        if (root->val > ceil_floor_ans.second)
            ceil_floor_ans.second = min(root->val, ceil_floor_ans.second);
        for (auto child : root->children)
            ceil_floor_helper(child, val);
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
    Generic_Tree mtree(tree);
    print(mtree.root);
    return 0;
}
