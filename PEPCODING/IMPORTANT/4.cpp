#include <bits/stdc++.h>
using namespace std;

int _LIS_helper(vector<int> nums, int index, int curr_size)
{
    if (index >= nums.size())
        return 0;
    int ans = curr_size;
    for (int i = index; i < nums.size(); i++)
    {
        if (nums[i] > nums[index])
            ans = max(ans, _LIS_helper(nums, i, curr_size + 1));
    }
    return ans;
}

int LIS(vector<int> nums)
{
    int n = nums.size(), ans = 0;
    if (n < 2)
        return n;
    for (size_t i = 0; i < n; i++)
        ans = max(ans, _LIS_helper(nums, i, 1));
    return ans;
}

int LIS_memo(vector<int> nums)
{
    int n = nums.size();
    vector<int> lis(n, 1);
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (nums[i] > nums[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(nums.begin(), nums.end());
}

int main()
{

    vector<int> nums{3, 10, 2, 1, 20};
    cout << LIS(nums) << endl;
    return 0;
}