#include <bits/stdc++.h>
using namespace std;

int minStartValue(vector<int> &nums)
{
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        dp[i] = dp[i - 1] + nums[i];
    }
    int ans = *min_element(dp.begin(), dp.end());
    return ans >= 1 ? 1 : abs(ans) + 1;
}

int main()
{

    return 0;
}