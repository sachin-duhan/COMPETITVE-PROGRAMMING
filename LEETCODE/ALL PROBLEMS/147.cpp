#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    }

    ListNode *insertionSortList(ListNode *head)
    {
        if (!head)
            return head;
        vector<int> nums;
        ListNode *temp = head;
        while (temp)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        sort(nums.begin(), nums.end());
        temp = head;
        ListNode *newHead = temp;
        for (auto a : nums)
        {
            ListNode *x = new ListNode(a);
            temp->next = x;
            temp = temp->next;
        }
        return newHead->next;
    }
};