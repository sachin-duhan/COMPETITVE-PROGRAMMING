#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums, int k)
{
    map<int, int> m;
    m[0] = 1;
    int res = 0, curr = 0;
    for (int a : nums)
    {
        curr += a;
        auto itr = m.find(curr - k);
        if (itr != m.end())
            res += m[curr - k];
        int count = itr != m.end() ? itr->second + 1 : 1;
        m.insert(make_pair(curr, count));
    }
    return res;
}