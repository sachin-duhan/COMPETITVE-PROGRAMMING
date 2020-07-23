#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        map<int, int> m;
        for (int a : nums)
            m[a]++;
        vector<int> ans;
        for (auto itr : m)
            if (itr.second == 1)
                ans.push_back(itr.first);
        return ans;
    }
};