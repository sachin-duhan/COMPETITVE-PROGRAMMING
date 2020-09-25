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

vector<int> find_path(TreeNode *root, int num)
{
    if (root->children.empty())
        return {};
    if (root->val == num)
        return {num};
    for (auto child : root->children)
    {
        auto sub_path = find_path(child, num);
        if (sub_path.size() > 0)
        {
            sub_path.push_back(root->val);
            return sub_path;
        }
    }
    return {};
}

int distance(TreeNode *root, int num1, int num2)
{
    vector<int> path1 = find_path(root, num1), path2 = find_path(root, num2);
    int i = path1.size() - 1, j = path2.size() - 1;
    // 60 20 10 
    // 110 80 30 10
    while (i >= 0 && j >= 0 && path1[i] == path2[j])
    {
        i--;
        j--;
    }
    return path1.size() + path2.size(); - i - j;
}

int main()
{
    vector<int> tree = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 170, -1, -1, -1};
    Generic_Tree mtree(tree);

    return 0;
}
