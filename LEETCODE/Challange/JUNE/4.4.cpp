#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<bool> seen(nums.size(), false);
        int i = 0, j = nums.size() - 1;
        while (i <= j)
        {
            if (seen[nums[i] - 1])
                return nums[i];
            else
                seen[nums[i] - 1] = true;
            i++;
            if (seen[nums[j] - 1])
                return nums[j];
            else
                seen[nums[j] - 1] = true;
            j--;
        }
        return -1;
    }
};
