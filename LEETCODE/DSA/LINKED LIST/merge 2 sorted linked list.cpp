#include<bits/stdc++.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        int v1 = -1, v2 = -1;
        ListNode *t1 = l1, *t2 = l2;
        ListNode *dummy = new ListNode(0), *nu = dummy;
        while (t1 || t2)
        {
            v1 = t1 ? t1->val : INT_MAX;
            v2 = t2 ? t2->val : INT_MAX;
            ListNode *temp = new ListNode(min(v1, v2));
            nu->next = temp;
            nu = nu->next;
            if (v1 < v2)
                t1 = t1->next;
            else
                t2 = t2->next;
        }
        return dummy->next;
    }
};