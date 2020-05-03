#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    vector<int> sums(nums.size(), 0);
    sums[0] = nums[0] > 0 ? nums[0] : 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (sums[i - 1] + nums[i] > 0)
        {
            sums[i] = sums[i - 1] + nums[i];
        }
        else
            sums[i] = 0;
    }
    return *max_element(sums.begin(), sums.end());
}

int maxSubArray_main(vector<int> &nums)
{
    int maxCurrent = nums[0];
    int maxGlobal = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        maxCurrent = max(nums[i], maxCurrent + nums[i]);
        if (maxCurrent > maxGlobal)
        {
            maxGlobal = maxCurrent;
        }
    }

    return maxGlobal;
}
int main()
{
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(arr) << endl;
    cout << maxSubArray_main(arr) << endl;
    return 0;
}