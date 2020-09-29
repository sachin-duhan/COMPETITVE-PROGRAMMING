#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *right, *left;
    TreeNode(int val) : val(val), left(NULL), right(NULL){};
    TreeNode(int val, TreeNode *left, TreeNode *right) : val(val), left(left), right(right){};
};

class BinaryTree
{
    void __PPI_helper(TreeNode *root)
    {
        if (!root)
            return;
        stack<pair<TreeNode *, int>> s; // {node, state}
        s.push({root, 1});
        string preTraversal, posTraversal, inorderTraversal;
        while (!s.empty())
        {
            auto state = s.top().second;
            auto node = s.top().first;
            if (state == 1)
            {
                preTraversal += to_string(node->val);
                if (node->left)
                    s.push({node->left, 1});
                s.top().second++;
            }
            else if (state == 2)
            {
                inorderTraversal += to_string(node->val);
                if (node->right)
                    s.push({node->right, 1});
                s.top().second++;
            }
            else
            {
                posTraversal += to_string(node->val);
                s.pop();
            }
        }
        cout << preTraversal << endl
             << inorderTraversal << endl
             << posTraversal << endl;
    }

public:
    TreeNode *root;
    BinaryTree(vector<int> nums)
    {
        if (nums.size() == 0)
            return;
        this->root = new TreeNode(nums[0]);
        stack<pair<TreeNode *, int>> s;
        s.push({root, 1});
        for (auto a : nums)
        {
            assert(!s.empty()); // checking stack is not empty
            if (a == -1)
            { // vector cannot contain null, so -1 marks null
                s.top().second++;
                continue;
            }

            int state = s.top().second;
            if (state == 1) // add to left
            {
                TreeNode *temp = new TreeNode(a);
                s.top().first->left = temp;
                s.top().second++;
                s.push({temp, 1});
            }
            else if (state == 2) // add to right
            {
                TreeNode *temp = new TreeNode(a);
                s.top().first->right = temp;
                s.top().second++;
                s.push({temp, 1});
            }
            else
                s.pop();
        }
    }

    void PPI_ITERATIVE() { __PPI_helper(root); } // print pre post and inorder traversal | iterative version!!
};

int main()
{
    BinaryTree tree({1, 2, 3, 4, 5, 6, 7});
    tree.PPI_ITERATIVE();
    return 0;
}