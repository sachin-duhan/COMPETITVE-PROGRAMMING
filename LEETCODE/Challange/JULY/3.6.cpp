#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = head, *prev = head;
        while (temp)
        {
            if (temp->val == val)
            {
                prev->next = temp->next ? temp->next : NULL;
                temp = temp->next ? temp->next : NULL;
            }
            prev = temp ? temp : NULL;
            temp = temp->next ? temp->next : NULL;
        }
        return head;
    }
};