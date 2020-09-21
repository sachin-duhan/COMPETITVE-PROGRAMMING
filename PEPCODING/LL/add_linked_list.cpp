
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

class add
{
    Node *temp = new Node(), *dummy = temp;
    int helper(Node *n, Node *m)
    {
        if (!n && !m)
        {
            int val = n->val + m->val;
            this->temp->next = new Node(val % 10);
            this->temp = this->temp->next;
            return val > 9 ? 1 : 0;
        }
        int a = n ? n->val : 0, b = m ? m->val : 0;
        if(n!= NULL) n = n->next;
        if(m!= NULL) m = m->next;
        int remainder = helper(n,m);
        int val = a+b;
        this->temp->next = new Node(val % 10);
        this->temp = this->temp->next;
        return val > 9 ? 1 : 0;
    }
public:
    void reverse(Node* head)
    {
        Node *current = head;
        Node *prev = NULL, *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    Node *add_linked_lists(Node *n1, Node *n2)
    {
        int remainder = helper(n1, n2);
        if(remainder > 0) this->temp->next = new Node(1);
        return dummy->next;
    }
};

int main()
{
    Node *num1 = insert({9, 0, 9, 0}), *num2 = insert({1, 1});
    add solve;
    solve.reverse(num1);
    // print(num1);
    return 0;
}
