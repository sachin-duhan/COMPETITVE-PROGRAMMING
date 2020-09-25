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

    void mirror(TreeNode *root)
    {
        if (!root)
            return;
        reverse(root->children.begin(), root->children.end());
        for (auto &child : root->children)
            mirror(child);
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

    bool find(const int num)
    {
        if (!root)
            return false;
        queue<TreeNode *> q;
        q.push(this->root);

        while (!q.empty())
        {
            auto foq = q.front();
            q.pop();
            if (foq->val == num)
                return true;
            for (auto child : foq->children)
                q.push(child);
        }
        return false;
    }
};

void remove_leaves(TreeNode *root)
{
    for (size_t i = 0; i < root->children.size(); i++)
    {
        auto child = root->children[i];
        if (child->children.size() == 0)
        {
            auto itr = root->children.begin();
            advance(itr, i);
            root->children.erase(itr);
        }
        for (auto child : root->children)
            remove_leaves(child);
    }
}

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
    cout << (mtree.find(50) ? "true" : "false") << endl;
    return 0;
}
