#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int c) : val(c), next(nullptr) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *A = head, *B = head;
    while (B)
    {
        B = B->next;
        if (!B)
            return A;
        A = A->next;
        B = B->next;
    }
    return A;
}

int main()
{
    return 0;
}