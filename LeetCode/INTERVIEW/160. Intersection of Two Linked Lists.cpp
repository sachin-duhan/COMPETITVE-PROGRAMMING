#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *temp = headA, *temp2 = headB;
    map<ListNode *, int> m;
    while (temp)
    {
        m.insert(make_pair(temp, 1));
        temp = temp->next;
    }
    while (temp2)
    {
        if (m.find(temp2) != m.end())
            return temp2;
        temp2 = temp2->next;
    }
    return NULL;
}

int main()
{

    return 0;
}