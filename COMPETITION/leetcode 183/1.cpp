#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        if (nums.size() < 2)
            return nums;
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> sums(nums.size());
        sums[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            sums[i] = sums[i - 1] + nums[i];
        int start = 0;
        vector<int> ans;
        while (true)
        {
            if (sums[sums.size() - 1] - sums[start] < sums[start])
            {
                for (int i = 0; i <= start; i++)
                    ans.push_back(nums[i]);
                return ans;
            }
            else
                start++;
        }
    }
};