#include <bits/stdc++.h>
using namespace std;

ALNode *deepCopy(ALNode *head)
{
    if (!head)
        return head;
    ALNode *origin = head, *copy = new ALNode(0), *temp = copy, *newNode;
    map<ALNode *, ALNode *> m;

    while (origin)
    {
        newNode = new ALNode(origin->value);
        temp->next = newNode;
        m[origin] = temp;
        origin = origin->next;
    }

    temp = copy->next;
    while (head)
    {
        if (head->arbitrary)
            head->arbitrary = m[head->arbitrary];
        head = head->next;
        temp = temp->next;
    }
    return copy->next;
}

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *curr = head;
        if (!head)
            return NULL;
        while (curr)
        {
            Node *temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        while (curr)
        {
            if (curr->random)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node *output = head->next;
        Node *temp = output;
        while (curr && output)
        {
            if (curr->next)
            {
                curr->next = curr->next->next;
                curr = curr->next;
            }
            if (output->next)
            {
                output->next = output->next->next;
                output = output->next;
            }
        }
        return temp;
    }
};
