#include<bits/stdc++.h>
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

    void reorderList_impl(ListNode *head, ListNode *&head_delegate, ListNode *current, bool &complete)
    {
        if (current == nullptr)
            return;

        reorderList_impl(head, head_delegate, current->next, complete);

        if (complete)
            return;

        if (current == head_delegate || current == head_delegate->next)
        {
            current->next = nullptr;
            complete = true;
            return;
        }

        ListNode *temp = head_delegate->next;
        head_delegate->next = current;
        current->next = temp;
        head_delegate = current->next;
    }

public:
    void reorderList(ListNode *head)
    {

        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return;

        ListNode *head_delegate = head;

        bool complete = false;

        reorderList_impl(head, head_delegate, head, complete);
    }
};