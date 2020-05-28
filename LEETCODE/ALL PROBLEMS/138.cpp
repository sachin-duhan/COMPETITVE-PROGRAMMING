class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return head;
        unordered_map<Node *, Node *> mp;
        Node *curr = head, *newNode;
        while (curr != NULL)
        {
            newNode = new Node(curr->val);
            mp[curr] = newNode;
            curr = curr->next;
        }
        Node *output;
        curr = head;
        while (curr != NULL)
        {
            output = mp[curr];
            output->next = mp[curr->next];
            output->random = mp[curr->random];

            curr = curr->next;
        }
        return mp[head];
    }
};