#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node() : val(0), next(NULL){};
    Node(int val) : val(val), next(NULL){};
};

Node *insert(vector<int> nums)
{
    Node *head = new Node(nums[0]), *temp = head;
    int i = 1;
    while (temp && i < nums.size())
    {
        Node *node = new Node(nums[i++]);
        temp->next = node;
        temp = temp->next;
    }
    return head;
}

void print(const Node *head)
{
    if (!head)
        return;
    print(head->next);
    cout << head->val << " ";
}

Node *merge(Node *h1, Node *h2)
{
    if (!h2) return h1;
    if (!h1) return h2;
    Node *head = new Node(), *dummyHead = head, *t1 = h1, *t2 = h2;

    while (t1 && t2)
    {
        if (t1->val < t2->val)
        {
            head->next = new Node(t1->val);
            head = head->next;
            t1 = t1->next;
        }
        else
        {
            head->next = new Node(t2->val);
            head = head->next;
            t2 = t2->next;
        }
    }

    if (t1)
    {
        while (t1)
        {
            head->next = new Node(t1->val);
            head = head->next;
            t1 = t1->next;
        }
    }
    else if (t2)
    {
        while (t2)
        {
            head->next = new Node(t2->val);
            head = head->next;
            t2 = t2->next;
        }
    }
    return dummyHead->next;
}

int main()
{
    Node *head = insert({3, 4, 5, 6, 40});
    Node *head2 = insert({1, 2, 7, 8, 9, 34});
    Node *temp = merge(head, head2);
    print(temp);
    return 0;
}
