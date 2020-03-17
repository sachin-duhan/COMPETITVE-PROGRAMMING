#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int rob(vector<int> &nums)
{
    const int n = nums.size();
    vector<int> dp(n,0);
    if (n == 1)
        return nums[1];
    else if (n == 2)
        return max(nums[0], nums[1]);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; i++)
        dp[i] = max((dp[i - 2] + dp[i]), dp[i - 1]);
    return dp[n - 1];
}

int main()
{
    vector<int> v({1, 2, 3, 1});
    cout << rob(v) << endl;
    return 0;
}