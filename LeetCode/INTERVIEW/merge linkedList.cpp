#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (l1 == NULL)
    {
        if (l2 == NULL)
            return NULL;
        else
        {
            return l2;
        }
    }
    else
    {
        if (l2 == NULL)
            return l1;
        else
        {
            if (l1->val > l2->val)
            {
                l2->next = mergeTwoLists(l1, l2->next);
                return l2;
            }
            else
            {
                l1->next = mergeTwoLists(l1->next, l2);
                return l1;
            }
        }
    }
}
