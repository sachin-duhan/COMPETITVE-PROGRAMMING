#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {

        stack<TreeNode *> currStck, nextStck;
        int ltr = 1;
        currStck.push(root);
        // currStck.push(NULL);
        vector<int> v;
        vector<vector<int>> ans;
        if (!root)
            return ans;
        while (!currStck.empty())
        {
            TreeNode *tmp = currStck.top();
            currStck.pop();

            if (ltr)
            {
                if (tmp->left)
                    nextStck.push(tmp->left);
                if (tmp->right)
                    nextStck.push(tmp->right);
            }
            else
            {
                if (tmp->right)
                    nextStck.push(tmp->right);
                if (tmp->left)
                    nextStck.push(tmp->left);
            }

            v.push_back(tmp->val);
            if (currStck.empty())
            {
                ltr = 1 - ltr;
                swap(currStck, nextStck);
                ans.push_back(v);
                vector<int> s;
                v = s;
            }
        }

        return ans;
    }
};