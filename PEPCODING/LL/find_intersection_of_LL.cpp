
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

int LLsize(Node *head)
{
    if (!head)
        return 0;
    return LLsize(head->next) + 1;
}

Node *intersect(Node *one, Node *two)
{
    int n = LLsize(one), m = LLsize(two);
    int delta = abs(n - m);
    if (n > m)
        for (size_t i = 0; i < delta; i++)
            one = one->next;
    else
        for (size_t i = 0; i < delta; i++)
            two = two->next;
    while (one != two)
    {
        one = one->next;
        two = two->next;
    }
    return one;
}

int main()
{
    Node *head = insert({12, 34, 45, 7, 2, 3, 4, 5}), *head2 = insert({100, 72, 43, 45, 7, 2, 3, 4, 5});
    auto temp = intersect(head, head2);
    cout << temp->val << endl;
    return 0;
}
