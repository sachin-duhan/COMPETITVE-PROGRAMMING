#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int> nodes;
        while(temp){
            nodes.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* newHead;
        int start = 0, end = nodes.size()-1;
        while(start <= end){
            newHead->next =  new ListNode(nodes[start]);
            newHead = newHead->next;
            if(start != end) newHead->next = new ListNode(nodes[end]);
            newHead = newHead->next;
            start++;
            end--;
        }
    }
};

int main()
{
    return 0;
}