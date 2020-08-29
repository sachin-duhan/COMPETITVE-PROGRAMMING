#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution
{
    TreeNode *create(vector<int> &v, int l, int h)
    {
        if (l > h)
            return NULL;
        int mid = (l + h) / 2;
        TreeNode *node = new TreeNode(v[mid], create(v, l, mid - 1), create(v, mid + 1, h));
        return node;
    }

public:
    TreeNode *sortedListToBST(ListNode *head)
    {
        vector<int> v;
        while (head)
        {
            ListNode *t = head;
            head = head->next;
            v.push_back(t->val);
        }
        return create(v, 0, v.size() - 1);
    }
};