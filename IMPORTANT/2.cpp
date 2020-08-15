#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(vector<int> nums, int sum)
{
    int n = nums.size();
    int t_sum = accumulate(nums.begin(), nums.end(), 0);
    if (t_sum > 0 && t_sum < sum)
        return {-1, -1};
    for (size_t i = 0; i < n; i++)
    {
        int cur = 0;
        for (size_t j = i + 1; j < n && cur <= sum; j++)
        {
            cur += nums[i];
            if (cur == sum)
                return {i, j};
        }
    }
    return {-1, -1};
}

int main()
{
}