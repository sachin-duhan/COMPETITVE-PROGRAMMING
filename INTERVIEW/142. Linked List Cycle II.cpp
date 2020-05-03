/*only the solution function is included here!*/

// cycle detecion in linked list!
struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *detectCycle(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            break;
    }

    if (!fast || !fast->next)
        return nullptr;

    ListNode *seek = head;
    while (seek != slow)
    {
        seek = seek->next;
        slow = slow->next;
    }
    return seek;
}