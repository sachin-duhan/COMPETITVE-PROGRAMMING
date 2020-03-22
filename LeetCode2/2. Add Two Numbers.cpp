#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *newNode(int x)
{
    ListNode *node = new ListNode();
    node->val = x;
    node->next = NULL;
    return node;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    vector<int> v1, v2;
    ListNode *temp = l1;
    while (temp)
    {
        v1.push_back(temp->val);
        temp = temp->next;
    }
    temp = l2;
    while (temp)
    {
        v2.push_back(temp->val);
        temp = temp->next;
    }

    int i = v1.size() - 1, j = v2.size() - 1, carry = 0;
    int size = i >= j ? i + 1 : j + 1;
    vector<int> ans(size);

    while (i || j)
    {
        int sum = v1[i--] + v2[j--] + carry;
        carry = 0;
        if (sum > 10)
        {
            carry = 1;
            sum %= 10;
        }
        ans[size--] = sum;
    }

    if (i != 0)
        while (i)
        {
            int sum = v1[i--] + carry;
            carry = 0;
            if (sum >= 10)
            {
                carry = 1;
                sum %= 10;
            }
            ans[size--] = sum;
        }

    if (j != 0)
        while (j)
        {
            int sum = v2[j--] + carry;
            carry = 0;
            if (sum > 10)
            {
                carry = 1;
                sum %= 10;
            }
            ans[size--] = sum;
        }
}

ListNode *addTwoNumber(ListNode *l1, ListNode *l2)
{
    int carry = 0;
    ListNode dummyHead = new ListNode(0);
    ListNode *p = l1, *q = l2, *curr = NULL;
    while (p || q)
    {
        int x = p ? p->val : 0;
        int y = q ? q->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (p)
            p = p->next;
        if (q)
            q = q->next;
    }
    if (carry > 0)
    {
        curr->next = new ListNode(carry);
    }
    return dummyHead.next;
}

int main()
{

    return 0;
}