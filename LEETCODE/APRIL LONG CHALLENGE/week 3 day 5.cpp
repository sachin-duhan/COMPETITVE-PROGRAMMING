#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        while (s <= e)
        {
            int m = (e + s) / 2;

            if (nums[m] == target)
                return m;

            if (nums[m] > target)
            {
                if (nums[s] <= target || nums[s] > nums[m])
                    e = m - 1;
                else
                    s = m + 1;
            }
            else
            {
                if (nums[s] > target || nums[s] <= nums[m])
                    s = m + 1;
                else
                    e = m - 1;
            }
        }

        return -1;
    }
};