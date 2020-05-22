#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    Solution()
    {
        ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    }

    vector<bool> kidsWithCandies(vector<int> &candies, int e)
    {
        int s = candies.size(), m = *max_element(candies.begin(), candies.end());
        vector<bool> ans(s, false);
        for (int i = 0; i < s; i++)
            if (candies[i] + e >= m)
                ans[i] = true;
        return ans;
    }
};
