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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next)
            return head;
        int size = 1;
        ListNode *end = head;
        while (end->next)
        {
            size++;
            end = end->next;
        }
        k %= size;
        if (k == 0)
            return head;
        int move = size - k + 1;
        ListNode *temp = head, *newEnd = head;
        while (--move)
        {
            newEnd = temp;
            temp = temp->next;
        }
        end->next = head;
        newEnd->next = nullptr;
        return temp;
    }
};