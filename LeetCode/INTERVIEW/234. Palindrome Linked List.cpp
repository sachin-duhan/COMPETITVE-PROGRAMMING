#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    vector<int> v;
    stack<int> s;
    ListNode *temp = head;

    while (temp)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }

    for (int i = 0; i < v.size() / 2; i++)
        s.push(v[i]);

    int start = v.size() / 2;
    if (v.size() % 2 != 0)
        start++;

    for (; start < v.size(); start++)
    {
        if (v[start] != s.top())
            return false;
        s.pop();
    }
    return true;
}
int main()
{
    // give a linked list to the solve function and it will lreturn true/false in O(n) complexity!
    return 0;
}