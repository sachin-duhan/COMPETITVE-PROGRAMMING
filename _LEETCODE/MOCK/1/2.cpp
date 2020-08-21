// add two numbers in linked list

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *holder = dummy;
        ListNode *temp1 = l1, *temp2 = l2;
        bool carry = false;
        while (temp2 || temp1)
        {
            int x = temp1 ? temp1->val : 0, y = temp2 ? temp2->val : 0;
            temp1 = temp1 ? temp1->next : NULL;
            temp2 = temp2 ? temp2->next : NULL;
            int val = x + y;
            val += carry ? 1 : 0;
            if (carry)
                carry = false;
            if (val > 9)
            {
                val %= 10;
                carry = true;
            }
            dummy->next = new ListNode(val);
            dummy = dummy->next;
        }
        if (carry)
            dummy->next = new ListNode(1);
        return holder->next;
    }
};
