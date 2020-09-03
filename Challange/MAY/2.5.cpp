#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        map<int, int> m;
        for (auto a : nums)
            m[a]++;
        int ans = 0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
            if (itr->second == 1)
                return itr->first;
        return -1;
    }
};