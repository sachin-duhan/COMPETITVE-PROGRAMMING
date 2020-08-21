#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void reorderList(ListNode *head)
    {
        vector<int> nums;
        ListNode *temp = head;
        while (temp)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int i = 0, j = nums.size() - 1;
        while (i <= j && temp)
        {
            temp->val = nums[i++];
            temp = temp->next;
            if (temp)
                temp->val = nums[j--];
            temp = temp ? temp->next : NULL;
        }
    }
};