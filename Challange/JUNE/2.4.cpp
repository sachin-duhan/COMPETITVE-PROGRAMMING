#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        map<int, int> m;
        for (int a : nums)
            m[a]++;
        nums.clear();
        for (auto item : m)
        {
            int k = item.second;
            while (k--)
                nums.push_back(item.first);
        }
    }
};
