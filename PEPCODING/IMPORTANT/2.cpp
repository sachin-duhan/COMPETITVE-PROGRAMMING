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

pair<int, int> sliding_window_solution(vector<int> nums, int sum)
{
    int n = nums.size();
    if (!n)
        return {-1, -1};
    int i = 0, j = 0, curr = nums[0];
    while (curr != sum && j < n - 1)
    {
        if (curr > sum)
        {
            curr -= nums[i];
            i++;
        }
        else if (curr < sum)
        {
            j++;
            curr += nums[j];
        }

        if (curr == sum)
            return {i, j};
    }
    return {-1, -1};
}
int main()
{
}