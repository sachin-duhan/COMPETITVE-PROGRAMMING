#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    if (stones.size() == 0)
        return 0;
    priority_queue<int> q;
    for (auto el : stones)
        q.push(el);
    while (q.size() >= 2)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        q.push(abs(a - b));
    }
    return q.size() > 0 ? q.top() : 0;
}

int main()
{
    // do it!
    return 0;
}