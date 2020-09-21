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
    cout << head->val << " ";
    print(head->next);
}

void remove_duplicates(Node *head)
{
    Node *temp = head, *last = temp;
    map<int, int> m;
    while (temp)
    {
        if (m.find(temp->val) != m.end())
        {
            temp = temp->next;
            last->next = temp;
        }
        else
        {
            m[temp->val]++; 
            last = temp;
            temp = temp->next;
        }
    }
}
int main()
{
    Node *head = insert({2,2,2,2,2,2,2,2,2,2,});
    remove_duplicates(head);
    print(head);
    return 0;
}
