#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> nums, int k)
{
    int n = nums.size();
    if (!n)
        return 0;
    bool isNeg = false;
    for (auto a : nums)
        if (a < 0)
        {
            isNeg = true;
            break;
        }

    if (!isNeg)
        return k * accumulate(nums.begin(), nums.end(), 0);
    int count = 0;
    if (nums[0] > 0)
        count++;
    if (nums[n - 1] > 0)
        count++;
    for (int j = 0; j < count; j++)
        for (size_t i = 0; i < n; i++)
            nums.push_back(nums[i]);
    int _sum = 0, maxSum = 0;
    for (int a : nums)
    {
        _sum += a;
        if (_sum < 0)
            _sum = 0;
        else
            maxSum = max(_sum, maxSum);
    }
    return maxSum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> input;
        while (n--)
        {
            int temp;
            cin >> temp;
            input.push_back(temp);
        }
        cout << solve(input, k) << endl;
    }
    return 0;
}