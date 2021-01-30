#include <bits/stdc++.h>
using namespace std;

struct LLNode
{
    int val;
    LLNode *next;
};

LLNode *reverse_helper(LLNode *curr, LLNode *prev, const LLNode *root)
{
    if (!curr->next)
        return NULL;
    auto temp = curr->next;
    curr->next = prev;
    reverse_helper(temp, curr, root);
    return curr;
}

LLNode *reverse(LLNode *root)
{
    if (!root)
        return NULL;
    // 1 -> 2 -> 3 -> 4 -> 5
    // 1 -> 2 -> 3 -> 4 <- 5
    reverse_helper(root, NULL, root);
    // 5 -> 4 -> 3 -> 2 -> 1
}

void print(LLNode* root){
    auto temp = root;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    LLNode *root;
    root->val = 1;
    LLNode *node2, *node3, *node4;
    node2->val = 2;
    node3->val = 3;
    node4->val = 4;

    root->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    print(root);
    return 0;
}
