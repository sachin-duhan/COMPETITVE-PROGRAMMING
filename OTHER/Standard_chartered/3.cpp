#include <bits/stdc++.h>
using namespace std;
int dp[1024];

int get_binary(int n)
{
    int ans = 0;
    while (n)
    {
        int rem = n % 10;
        ans |= (1 << rem); // main!!
        n /= 10;
    }
    return ans;
}

int helper(int u, vector<int> nums)
{
    if (u == 0)
        return 0;
    if (dp[u] != -1)
        return dp[u];
    for (int i = 0; i < nums.size(); i++)
    {
        int mask = get_binary(nums[i]);
        dp[u] = max(max(0, dp[u ^ mask]) + nums[i], dp[u]);
    }
    return dp[u];
}

int solve(vector<int> nums)
{
    for (int i = 0; i < (1 << 10); i++)
        dp[i] = -1;
    int ans = 0;
    for (int i = 0; i < (1 << 10); i++)
        ans = max(ans, helper(i, nums));
    return ans;
}

