#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};

void deleteNode(ListNode* pos){
    ListNode* temp = pos;
    if(!pos)return;
    pos->next = pos->next->next;
    pos->val = pos->next->val;
    free(pos);
}

int main()
{

    return 0;
}