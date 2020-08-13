#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int t_sum = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0, diff = INT_MAX, len = nums.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                int curr = t_sum - nums[i] - nums[j];
                cout << "current sum - " << curr << endl;
                if (abs(curr - target) < diff)
                {
                    ans = curr;
                    diff = curr - target;
                    if (diff == 0)
                        return ans;
                }
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int diff = INT_MAX, sz = nums.size();
        sort(begin(nums), end(nums));
        for (int i = 0; i < sz && diff != 0; ++i)
        {
            int lo = i + 1, hi = sz - 1;
            while (lo < hi)
            {
                int sum = nums[i] + nums[lo] + nums[hi];
                if (abs(target - sum) < abs(diff))
                    diff = target - sum;
                if (sum < target)
                    ++lo;
                else
                    --hi;
            }
        }
        return target - diff;
    }
};

int main()
{
    Solution solve;
    vector<int> nums{1, 2, -3, 4, -5, -6, 7, 8};
    cout << solve.threeSumClosest(nums, 4) << endl;
    return 0;
}