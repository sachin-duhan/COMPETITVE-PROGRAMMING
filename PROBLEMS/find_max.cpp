
#include <bits/stdc++.h>
using namespace std;
int max_recurr(vector<int> nums, int index = 0, int curr_max = INT_MIN)
{
    if (index >= nums.size()) return INT_MIN;
    return max(nums[index], max_recurr(nums, index + 1, curr_max));
}
int main()
{
    vector<int> nums = {1, 2, 34, 4, 5};
    cout << max_recurr(nums) << endl;
    return 0;
}
