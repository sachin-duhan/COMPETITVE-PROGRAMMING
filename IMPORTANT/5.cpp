#include <bits/stdc++.h>
using namespace std;

int max_sum_LIS(vector<int> nums)
{
    int n = nums.size();
    vector<int> sums = nums;
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && sums[i] < sums[j] + nums[i])
                sums[i] = sums[j] + nums[i];
        }
    }
    for (auto a : sums)
        cout << a << " ";
    cout << endl;
    return *max_element(sums.begin(), sums.end());
}

int main()
{
    vector<int> input{1, 2, 3, 4, 20, 100};
    cout << max_sum_LIS(input) << endl;
    return 0;
}