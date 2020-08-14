class Solution
{
public:
    ALNode *copyarbitraryList(ALNode *head)
    {
        ALNode *curr = head;
        if (!head)
            return NULL;
        while (curr)
        {
            ALNode *temp = curr->next;
            curr->next = new ALNode(curr->value);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        while (curr)
        {
            if (curr->arbitrary)
            {
                curr->next->arbitrary = curr->arbitrary->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        ALNode *output = head->next;
        ALNode *temp = output;
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