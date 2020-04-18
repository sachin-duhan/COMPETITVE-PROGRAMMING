#include <bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> q(stones.begin(),stones.end());
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
    vector<int> v{2, 2, 2, 2, 2, 2};
    cout << lastStoneWeight(v) << endl;
    return 0;
}