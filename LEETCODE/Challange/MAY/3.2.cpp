//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *oddy = head, *even = head->next, *holder = even;
        while (even && even->next)
        {
            oddy->next = even->next;
            oddy = oddy->next;
            even->next = oddy->next;
            even = even->next;
        }
        oddy->next = holder;
        return head;
    }
};