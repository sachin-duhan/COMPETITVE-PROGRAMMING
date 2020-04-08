#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        ListNode *temp;
        temp->val = 0;
        temp->next = NULL;
    }
};

// code to be writte in the the Leetcode IDE!!
ListNode *deleteNFromBehind(ListNode *head, int n)
{
    ListNode *dummy = new ListNode(-1);
    // if head gets deleted than this will take the value of the the second node in the LL!
    dummy->next = head;
    int len = 0;
    ListNode *temp = head;
    while (temp)
    {
        len++;
        temp = temp->next;
    }
    len -= n;
    temp = head;
    while (temp)
        temp = temp->next;
    temp->next = temp->next->next;
    return dummy->next;
}
