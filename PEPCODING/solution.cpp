#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &nums, int k)
    {
        int ans = INT_MAX, n = nums.size();
        if (n <= 3)
            return abs(accumulate(nums.begin(), nums.end(), 0) - k);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int number = nums[i] + nums[j] - k;
                    auto lb = lower_bound(nums.begin(), nums.end(), number) - nums.begin();
                    auto ub = upper_bound(nums.begin(), nums.end(), number) - nums.begin();
                    if (lb != i && lb != j)
                        ans = min(ans, abs(number + nums[lb]));
                    if (ub != i && ub != j)
                        ans = min(ans, abs(number + nums[ub]));
                }
            }
        }
        return ans;
    }
};