#include <vector>
#include <iostream>
using namespace std;
int maxProduct(vector<int> &nums)
{
    int ans = 0, n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n, 1);
    dp[0] = max(nums[0], 0);
    ans = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(nums[i - 1] * nums[i], nums[i]);
        ans = max(ans, dp[i]);
    }
    return ans < 0 ? 0 : ans;
}

int main()
{
    vector<int> v({-1, -1, -2});
    cout << maxProduct(v) << endl;
    return 0;
}