
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

Node *fold(Node *head)
{
    vector<Node *> nodes;
    Node *temp = head;
    while (temp)
    {
        nodes.push_back(temp);
        temp = temp->next;
    }
    int n = nodes.size();

    for (size_t i = 0; i < n / 2; i++)
        nodes[i]->next = nodes[n - i];
    return head;
}

int main()
{
    Node *head = insert({1, 2, 3, 4, 5, 6, 7, 8});
    // print(head);
    auto temp = fold(head);
    print(temp);
    return 0;
}
