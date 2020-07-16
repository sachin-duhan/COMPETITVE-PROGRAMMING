#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
            int tmp = nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                tmp += nums[j];
                ans.push_back(tmp);
            }
        }
        sort(ans.begin(), ans.end());
        int fina_sum = 0, mod = 1e9 + 7;
        for (int i = left; i <= right; i++)
            fina_sum += nums[i];
        return fina_sum % mod;
    }
};

// Author: Huahua
class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        constexpr int kMod = 1e9 + 7;
        vector<int> sums;
        for (int i = 0; i < n; ++i)
            for (int j = i, sum = 0; j < n; ++j)
                sums.push_back(sum += nums[j]);
        sort(begin(sums), end(sums));
        return accumulate(begin(sums) + left - 1, begin(sums) + right, 0LL) % kMod;
    }
};


int main()
{
    Solution solve;
    vector<int> nums{1, 2, 3, 4};
    cout << solve.rangeSum(nums,4,1,5);
    cout << endl;
    return 0;
}
