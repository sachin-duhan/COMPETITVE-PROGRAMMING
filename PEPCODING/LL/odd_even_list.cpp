#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node() : val(-1), next(NULL){};
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

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

Node *odd_even_list(Node *head)
{
    Node *evl = new Node(), *odl = new Node(), *dummy = odl, *evDummy = evl;
    Node *temp = head;
    while (temp)
    {
        if (temp->val % 2 != 0)
        {
            odl->next = new Node(temp->val);
            odl = odl->next;
        }
        else
        {
            evl->next = new Node(temp->val);
            evl = evl->next;
        }
        temp = temp->next;
    }
    odl->next = evDummy->next;
    return dummy->next;
}

int main()
{
    Node *head = insert({1, 2, 3, 4, 5, 6, 7, 8});
    Node *tmp = odd_even_list(head);
    print(tmp);
    return 0;
}
