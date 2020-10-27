
#include <bits/stdc++.h>
using namespace std;

struct LLNode
{
    int val;
    LLNode *next;
    LLNode(int val) : val(val), next(NULL) {}
};

LLNode *newNode(int val)
{
    LLNode *temp;
    temp->val = val;
    temp->next = NULL;
    return temp;
}

LLNode *solve(LLNode *l0, LLNode *l1)
{
    LLNode *dHead = newNode(-1), *temp = dHead;
    LLNode *t1 = l0, *t2 = l1;
    int carry = 0;

    while (t1 && t2)
    {
        int val = t1->val + t2->val + carry;
        carry = val / 10;
        temp->next = newNode(val % 10);
        t1 = t1->next;
        t2 = t2->next;
    }

    while (t1)
    {
        temp->next = newNode(t1->val);
        temp = temp->next;
        t1 = t1->next;
    }

    while (t2)
    {
        temp->next = newNode(t2->val);
        temp = temp->next;
        t2 = t2->next;
    }

    return dHead->next;
}

int main()
{
    return 0;
}
