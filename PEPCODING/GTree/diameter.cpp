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
        int sth = 0;
        for (auto &child : root->children)
            sth = max(sth, height(child));
        return 1 + sth;
    }

    int diameter_helper(TreeNode *root,int &dia)
    {
        int mxd = 0, smxd = 0;
        for(auto child : root->children){
            int sth = height(child);
            if(sth > mxd){
                smxd = mxd;
                mxd = sth;
            }
            else if(sth > smxd) smxd = sth;
        }
        int cand = mxd + smxd + 2;
        dia = max(dia,cand);
        return mxd + smxd + 1;
    }

    int diameter()
    {
        int dia;
        diameter_helper(root,dia);
        return dia;
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
